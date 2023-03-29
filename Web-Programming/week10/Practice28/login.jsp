<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%request.setCharacterEncoding("UTF-8"); %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>이상한 나라</title>
</head>
<body>
<%
String username = (String)session.getAttribute("user");

if(username == null){
	out.println("<form action=\"checker.jsp\">");
	out.println("아이디: ");
	out.println("<input type=\"text\" name=\"username\">");
	out.println("<br>");
	out.println("<br>");
	out.println("패스워드: ");
	out.println("<input type=\"password\" name=\"password\">");
	out.println("<input type=\"hidden\" name=\"action\" value=\"login\">");
	out.println("<br>");
	out.println("<br>");
	out.println("<input type=\"submit\" value=\"로그인\">");
	out.println("</form>");
}
else {
	out.println("<form action=\"checker.jsp\">");
	out.println(username + "님 환영합니다. <br>");
	out.println("<input type=\"hidden\" name=\"action\" value=\"logout\">");
	out.println("<br>");
	out.println("<br>");
	out.println("<input type=\"submit\" value=\"로그아웃\">");
	out.println("</form>");
}
%>
</body>
</html>