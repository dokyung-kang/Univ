<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>확인</title>
</head>
<body>
<%
String action = request.getParameter("action");

if (action.equals("login")){
	String username = request.getParameter("username");
	String password = request.getParameter("password");
	if(username != null){
		session.setAttribute("user", username);
	}
	response.sendRedirect("index.jsp");
}
else {
	session.setAttribute("user", null);
	response.sendRedirect("index.jsp");
}
%>
</body>
</html>