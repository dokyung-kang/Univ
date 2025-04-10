<%@ page contentType="text/plain; charset=utf-8" %>
<%@ page import="example.ajax.pizza.*"%>
<%@ page import="org.json.simple.parser.JSONParser" %>
<%@ page import="org.json.simple.JSONObject" %>

<%@ page import="java.util.*"%> 
<%-- <%! @SuppressWarnings("unchecked") %>  --%>
<%
JSONParser parser = new JSONParser();
JSONObject obj = 
	(JSONObject)parser.parse(request.getReader());

String phone = (String)obj.get("phone");
String order = (String)obj.get("order");
String address = request.getParameter("address");
System.out.println("phone: " + phone);
System.out.println("order: " + order);
System.out.println("address: " + address);


// application에서 "custMap" 객체를 검색하고 조회/수정 가능

Map<String, Customer> custMap = (Map<String, Customer>)application.getAttribute("custMap"); 
if (custMap == null || custMap.get(phone) == null) {	 
	response.setStatus(400);		// bad request
	response.addHeader("Status", "Unregistered customer");
	return;
} 
else {
	Customer c = custMap.get(phone);	// 고객 정보 검색
	System.out.println(c.getName());	// 이름 출력 
}


if (order.length() <= 0) {
	response.setStatus(400);		// bad request
  	response.addHeader("Status", "No order was received");
  	out.print(" ");
}
else if (address.length() <= 0) {
	response.setStatus(400);		// bad request
  	response.addHeader("Status", "No address was received");
	out.print(" ");
} 
else { 
	// make pizza and compute delivery time ...
	int deliveryTime = (int)(Math.random()*8 + 2);
	System.out.println("delivery time: " + deliveryTime);
	out.print(deliveryTime);
}
%>