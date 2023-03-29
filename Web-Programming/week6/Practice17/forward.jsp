<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>forward action</title>
</head>
<body>
<jsp:forward page="greeting.jsp">
<jsp:param value="Dongduk University" name="name"/>
<jsp:param value="2011/04/05" name="date"/>
</jsp:forward>
</body>
</html>