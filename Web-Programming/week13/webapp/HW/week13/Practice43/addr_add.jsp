<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="jspbook.pr43.*"%>
<!DOCTYPE html>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<% request.setCharacterEncoding("UTF-8"); %>

<jsp:useBean id="addr" class="jspbook.pr43.AddBean"/>
<jsp:setProperty name="addr" property="*"/>
<jsp:useBean id="ad" class="jspbook.pr43.AddManager" scope="application"/>
<%
	ad.add(addr);
%>
<html>
<head>
<meta charset="UTF-8">
<title>ch07 : 등록내용</title>
</head>
<body>
<div align="center">
<h2>등록내용</h2>
이름 : 
<c:out value="${param.username}"></c:out>
<br>
<br>
전화번호 : 
<c:out value="${param.tel}"></c:out>
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
그룹 : 
<c:out value="${param.group}"></c:out>
<br>
<br>
<hr>
<a href="addr_list.jsp">전체 목록 보기</a>
<a>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</a>
<a href="addr_list_group.jsp">그룹별 목록 보기</a>
</div>
</body>
</html>