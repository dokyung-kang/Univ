<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.Enumeration" %>
<% request.setCharacterEncoding("UTF-8"); %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Practice 20</title>
</head>
<body>
<h2>전달된 파라미터 이름들</h2>
<%
Enumeration<String> e = request.getParameterNames();
while(e.hasMoreElements()){
	String s = e.nextElement();
	out.println(s + "<br>");
}
%>
<hr>
타입: <%= request.getParameter("type") %><br>
아이디:<%= request.getParameter("strID") %><br>
패스워드:<%= request.getParameter("strPwd") %><br>
</body>
</html>