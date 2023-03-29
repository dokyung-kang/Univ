<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.Enumeration"%>
<% request.setCharacterEncoding("UTF-8"); %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Practice 22</title>
</head>
<body>
id: <%= request.getParameter("id") %><br>
pw: <%= request.getParameter("pw") %><br>
gender: <%= request.getParameter("gender") %><br>
phone1: <%= request.getParameter("phone1") %><br>
phone2: <%= request.getParameter("phone2") %><br>
phone3: <%= request.getParameter("phone3") %><br>
email: <%= request.getParameter("email") %><br>
birth: <%= request.getParameter("birth") %><br>
hobby:
<%
	String h[] = request.getParameterValues("hobby");

	for(String hobbies: h){
		out.println(hobbies + "/");
	}
%>
<br>
memo: <%= request.getParameter("memo") %><br>
<hr>
<h2>Processing Parameters</h2>
<%! 
	String[] mChoices = {"hobby"};

	boolean isMultipleChoice(String paramName){
		int i;
		
		for(i = 0; i < mChoices.length; i++)
			if (paramName.equals(mChoices[i]))
				return true;
		return false;
	}
%>
<%

	String[] hobbyNames = {"뉴스", "맛집", "책", "영화", "여행"};
	String[] telCompany = {"010", "011", "017", "070"};
	String[] gNames = {"남", "여"};
	
	Enumeration<String> e = request.getParameterNames();
	while(e.hasMoreElements()){
		String s = e.nextElement();
		out.println(s + ": ");
		if (isMultipleChoice(s) == true){
			String tmp[] = request.getParameterValues(s);

			for(String t: tmp){
				out.println(hobbyNames[Integer.parseInt(t)] + "/");
			}
		}
		else {
			if (s.equals("phone1")){
				out.println(telCompany[Integer.parseInt(request.getParameter(s))]);
			}
			else if (s.equals("gender")){
				out.println(gNames[Integer.parseInt(request.getParameter(s))]);
			}
			else {
				out.println(request.getParameter(s));
			}
		}
		out.println(" <br> ");
	}
%>
</body>
</html>