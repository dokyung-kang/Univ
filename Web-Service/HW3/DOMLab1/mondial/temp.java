package mondial;

import javax.xml.parsers.*;

import org.w3c.dom.*;

import javax.xml.transform.*;
import javax.xml.transform.dom.*;
import javax.xml.transform.stream.*;

import java.io.*;
import java.text.NumberFormat;
import java.util.HashMap;
import java.util.Map;

public class temp {
	static final String inputFile = "mondial/mondial.xml";  	// 추후 "mondial/mondial.xml"로 변경
	static final String outputFile = "mondial/result.xml";
	
	// 대륙 이름들을 저장하는 배열 정의
    static final String continent[] = new String[] { "Europe", "Asia", "America", "Africa", "Australia" };
    // 각 대륙의 인구 값들을 저장할 배열 선언 (순서는 위 배열의 이름들과 일치)
    static long pop[] = new long[5];
 
    public static void main(String[] args) throws Exception {
		// DOM 파서 생성
		DocumentBuilderFactory factory = DocumentBuilderFactory.newInstance();
		factory.setIgnoringElementContentWhitespace(true);
		DocumentBuilder builder = factory.newDocumentBuilder();

		// XML 문서 파싱하기
		Document document = builder.parse(inputFile);

		Element mondial = document.getDocumentElement();
		
		// 대륙별 인구를 계산 및 출력 (3번)
		computePopulationsOfContinents(mondial);					
		
		// 종교별 신자 수를 계산 및 출력 (4번: 선택사항)
		computeBelieversOfReligions(mondial);	
				
		// 국가별 정보 검색 및 출력 (1번)
		processCountries1(mondial);	
		
		// 국가별 정보 검색 및 DOM 트리 수정 (2번)
		processCountries2(mondial);	
		
		// 처리 결과 출력을 위한 변환기 생성
		TransformerFactory tf = TransformerFactory.newInstance();
		Transformer transformer = tf.newTransformer();

		// 출력 포맷 설정: XML 선언과 문서 유형 선언 내용 설정하기
		transformer.setOutputProperty(OutputKeys.ENCODING, "utf-8");
		// transformer.setOutputProperty(OutputKeys.DOCTYPE_SYSTEM,
		// "mondial.dtd");
		transformer.setOutputProperty(OutputKeys.INDENT, "yes");
		transformer.setOutputProperty("{http://xml.apache.org/xslt}indent-amount", "2");
		
		// DOMSource 객체 생성
		DOMSource source = new DOMSource(document);

		// StreamResult 객체 생성
		StreamResult result = new StreamResult(new File(outputFile));

		// 파일로 저장하기
		transformer.transform(source, result);
		
		System.out.println();
		System.out.println(outputFile + "로 저장되었습니다.");
	}

	public static void processCountries1(Element mondial) {
		
//		NodeList list = mondial.getElementsByTagName("country");
//		for(int i = 0;  ;i++) {
//			list.item(i);
//		}
		
		// 각 <country> element에 대해
		for (Node ch = mondial.getFirstChild(); ch != null; ch = ch.getNextSibling())
		{		         		
			if(ch.getNodeName().equals("country")) {
				Element country = (Element)ch;
				
			// 1-1 국가 이름을 구해 출력
//				Node name = ch.getFirstChild();
//				String cName = name.getTextContent();
//				System.out.println(cName);
				
				Node name = country.getFirstChild();	//<name>Albania</name>
//				Text txt = (Text)name.getFirstChild();
//				String countryName = txt.getData();
				String countryName = name.getFirstChild().getNodeValue();
				System.out.println(countryName);
				
			// 1-2 국가 면적 출력
				String areaVal = country.getAttribute("area");
				System.out.println(" - 면적: " + areaVal);
				
            // 1-3 인구 출력
				NodeList popE = country.getElementsByTagName("population");
				String popVal = popE.item(0).getFirstChild().getNodeValue();
				System.out.println(" - 인구: " + popVal);

			
            // 1-4 수도의 이름 출력
				String capitalId = country.getAttribute("capital");
				Element capital = null;
				if (!capitalId.isEmpty()) {
					capital = country.getOwnerDocument().getElementById(capitalId);
					String capitalName = capital.getFirstChild().getTextContent();
					System.out.println(" - 수도: " + capitalName);
				}
			}
		}
	} 
	
	public static void processCountries2(Element mondial) {
		
		NodeList list = mondial.getElementsByTagName("country");
		for(int i = 0; i < list.getLength(); i++)
		{
			Element country = (Element)(list.item(i));
			// 각 <country> element에 대해
			Document doc = country.getOwnerDocument();
			
            // 2-1 <area>를 생성해서 <name> 다음에 추가
			Element area = doc.createElement("area");
			String areaVal = country.getAttribute("area");
			Text areaTxt = doc.createTextNode(areaVal);
			area.appendChild(areaTxt);	
			country.insertBefore(area, country.getFirstChild().getNextSibling());
			
            // 2-2 수도에 해당하는 <city> 및 그 subtree를 DOM 트리에서 찾아 미리 제거해 둠
            String capitalId = country.getAttribute("capital");
			Node capital = null;
			if (!capitalId.isEmpty()) {
				capital = country.getOwnerDocument().getElementById(capitalId);
//				country.removeChild(capital);
			}
            
		
            // 2-3 <population> 이후의 형제 노드들을 모두 삭제
			Node popC = country.getFirstChild().getNextSibling().getNextSibling();
			while(popC.getNextSibling() != null) {
				country.removeChild(popC.getNextSibling());
			}
			
            // 2-4 앞에서 제거해 둔 수도에 해당하는 <city>과 그 자손 element들을 이용해서
		    // <capital> 및 그 subtree를 생성한 후 <country>의 마지막 자식으로 추가

			if (capital != null) {
				Element newCapital = doc.createElement("capital");
	            Node cap = capital.getFirstChild();
	            while(cap.getNextSibling() != null) {
	            	newCapital.appendChild(cap.getNextSibling());
	            }
	            newCapital.insertBefore(capital.getFirstChild(), newCapital.getFirstChild());
	
				NamedNodeMap attr = capital.getAttributes();
				newCapital.setAttribute("country", attr.getNamedItem("country").getTextContent());
				newCapital.setAttribute("id", attr.getNamedItem("id").getTextContent());
				newCapital.setAttribute("is_country_cap", attr.getNamedItem("is_country_cap").getTextContent());
	          
				country.appendChild(newCapital);
			}
			// 2-5 <country>의 모든 속성들을 삭제
            country.removeAttribute("area");
            country.removeAttribute("capital");
            country.removeAttribute("car_code");
            country.removeAttribute("memberships");
			
		}
		
        // 2-6 <country> 외의 다른 노드들은 모두 삭제
		Node nextChild = null;
		for (Node ch = mondial.getFirstChild(); ch != null;){		         		
			if(ch.getNodeType() == Node.ELEMENT_NODE) {
				if(!ch.getNodeName().equals("country")) {
					nextChild = ch.getNextSibling();
					mondial.removeChild(ch);
					ch = nextChild;
				}
				else {
					ch = ch.getNextSibling();
				}
			}
		}
        
	} 
	
	public static void computePopulationsOfContinents(Node mondial) {

		// ...
		for (Node ch = mondial.getFirstChild(); ch != null; ch = ch.getNextSibling())
		{		         		
			if(ch.getNodeName().equals("country")) {
				Element country = (Element)ch;
//				Node population = country.getFirstChild();
//				while(!population.getNodeName().equals("population")) {
//					population = population.getNextSibling();
//				}
				NodeList population = country.getElementsByTagName("population");
				String temp = population.item(0).getFirstChild().getNodeValue();
				long popVal = Long.parseLong(temp);
				
				Double max = 0.0;
				String continentName = null;
				for(Node enco = country.getFirstChild(); enco != null; enco = enco.getNextSibling()) {
					if(enco.getNodeName().equals("encompassed")) {
						NamedNodeMap tmp = enco.getAttributes();
						String percentage = tmp.getNamedItem("percentage").getTextContent();
						if(max < Integer.parseInt(percentage)) {
							max = Double.parseDouble(percentage);
							continentName = tmp.getNamedItem("continent").getTextContent();
						}
					}
				}
				switch (continentName) {
				case "europe" : pop[0] += popVal;
								break;
				case "asia" : pop[1] += popVal;
								break;
				case "america" : pop[2] += popVal;
								break;
				case "africa" : pop[3] += popVal;
								break;
				case "australia" : pop[4] += popVal;
								break;
				}
				
//				for(int i= 0; i < 5; i++) {
//					if(continent[i].equals(continentName)) {
//						pop[i] += popVal;
//						break;
//					}
//				}
			}
		}
		
		// 계산된 각 대륙의 인구를 출력
		printPopulationsOfContinents();
	}

	public static void printPopulationsOfContinents() {
		NumberFormat formatter = NumberFormat.getInstance();
		Long total = 0L;
		
		System.out.println("Populations of the Continents");
		System.out.println("------------------------------");
		for(int i = 0; i < 5; i++) {
			System.out.println(continent[i] + "의 인구: " + formatter.format(pop[i]) + "명");
			total += pop[i];
		}
		System.out.println("------------------------------");
		System.out.println("합계: " + formatter.format(total) + "명");
		System.out.println();
	}
	
	static Map<String, Long> religions = new HashMap<String, Long>();
	 
    public static void computeBelieversOfReligions(Element mondial) {
    	
    }
}