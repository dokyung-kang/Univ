<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="jspbook.pr42.*"%>
<!DOCTYPE html>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<% request.setCharacterEncoding("UTF-8"); %>
<jsp:useBean id="login" class="jspbook.pr42.StudentBean" scope="page"/>
<jsp:setProperty name="login" property="*"/>
<html>
<head>
<meta charset="UTF-8">
<title>회원가입</title>
</head>
<body>
<div align="center">
<h2>등록내용</h2>
이름 : 
<c:out value="${param.id}"></c:out>
<br>
<br>
패스워드 : 
<c:out value="${param.pw}"></c:out>
<br>
<br>
이메일 : 
<c:out value="${param.email}"></c:out>
<br>
<br>
성별 : 
<c:out value="${param.gender}"></c:out>
<br>
<br>
생일 : 
<c:out value="${param.birth}"></c:out>
<br>
<br>
<hr>
<c:if test="${param.gender == 0}">
	${param.id}씨는 남성이고,
</c:if>
<c:if test="${param.gender == 1}">
	${param.id}씨는 여성이고,
</c:if>
<c:forTokens var="year" items="${param.birth}" delims="-" varStatus="i">
	<c:if test="${i.first}">
		<c:if test="${2022-year >= 19}">
			성인입니다.
		</c:if>
		<c:if test="${2022-year < 19}">
			성인이 아닙니다.
		</c:if>
	</c:if>	
</c:forTokens>
</div>

</body>
</html>