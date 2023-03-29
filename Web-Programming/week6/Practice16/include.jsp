<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>include action</title>
</head>
<body>
<div align="center">
<h1>include 액션 연습</h1>
<hr>
<jsp:include page="greeting.jsp">
<jsp:param value="Dongduk University" name="name"/>
<jsp:param value="2011/04/05" name="date"/>
</jsp:include>
</div>
</body>
</html>