<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!-- 20210750 컴퓨터학과 강도경 chrome -->    
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Practice 09</title>
</head>
<body>
<%
String s = "Hello, Welcome to JSP World! Let's go!";
String t = "JSP";

out.println("입력되어 있는 문자열:" + s);
out.println("<br>");
out.println("문자열의 길이:" + s.length());
out.println("<br>");
out.println("'JSP'라는 문자의 위치:" + s.indexOf(t));
out.println("<br>");
out.println("모두 소문자로 변경:" + s.toLowerCase());
out.println("<br>");
out.println("모두 대문자로 변경:" + s.toUpperCase());
%>
</body>
</html>