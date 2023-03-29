<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="jspbook.pr01.*"%>
<!DOCTYPE html>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<%@ taglib tagdir="/WEB-INF/tags" prefix="Addrtag" %>
<% request.setCharacterEncoding("UTF-8"); %>

<jsp:useBean id="addr" class="jspbook.pr01.AddrBean"/>
<jsp:setProperty name="addr" property="*"/>
<jsp:useBean id="li" class="jspbook.pr01.AddrManager" scope="application"/>
<%
	li.add(addr);
%>
<html>
<head>
<meta charset="UTF-8">
<title>등록내용</title>
</head>
<body>
<div align="center">
<Addrtag:printAddr>등록내용</Addrtag:printAddr>
</div>
</body>
</html>