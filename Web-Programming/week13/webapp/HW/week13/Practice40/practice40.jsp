<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<% request.setCharacterEncoding("UTF-8"); %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Practice40</title>
</head>
<body>
id: ${param.id}<br>
pw: ${param.pw}<br>
gender: ${param.gender}<br>
phone1: ${param.phone1}<br>
phone2: ${param.phone2}<br>
phone3: ${param.phone3}<br>
email: ${param.email}<br>
birth: ${param.birth}<br>
hobby: 
<c:forEach var="index" items="${paramValues.hobby}">
	${paramValues.hobby[index]}/
</c:forEach>
<br>
memo: ${param.memo}<br>
<hr> <br>
<h2>Processing Parameters</h2>
id: ${param.id}<br>
pw: ${param.pw}<br>
gender: 
<c:if test="${param.gender == 0}">
남
</c:if>
<c:if test="${param.gender == 1}">
여
</c:if>
<br>
phone1: 
<c:if test="${param.phone1 == 0}">
010
</c:if>
<c:if test="${param.phone1 == 1}">
011
</c:if>
<c:if test="${param.phone1 == 2}">
017
</c:if>
<c:if test="${param.phone1 == 3}">
070
</c:if>
<br>
phone2: ${param.phone2}<br>
phone3: ${param.phone3}<br>
email: ${param.email}<br>
birth: ${param.birth}<br>
hobby: 
<c:set var="hobbies" value="${['뉴스', '맛집', '책', '영화', '여행']}"/>
<c:forEach varStatus="i" items="${paramValues.hobby}">
	${hobbies[i.index]}/
</c:forEach>
<br>
memo: ${param.memo}<br>
</body>
</html>