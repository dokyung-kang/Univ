<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="jspbook.pr43.*"%>
<!DOCTYPE html>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<% request.setCharacterEncoding("UTF-8"); %>
<jsp:useBean id="ad" class="jspbook.pr43.AddManager" scope="application"/>
<html>
<head>
<meta charset="UTF-8">
<title>ch07 : 주소록 목록</title>
</head>
<style>
table, td {
	text-align: center;
}
</style>
<body>
<div align="center">
<h2>주소록(그룹별 보기)</h2>
<hr>
<a href="addr_form.jsp">주소추가</a>
<br><br>
<table border=1>
<tr>
<td width=70>이름</td>
<td width=200>전화번호</td>
<td width=250>이메일</td>
<td width=60>성별</td>
<td width=60>그룹</td>
</tr>
<c:forEach var="elem" items="${ad.getAddList()}">
	<c:if test="${elem.group == '가족'}">
		<tr>
		<td>${elem.username}</td>
		<td>${elem.tel}</td>
		<td>${elem.email}</td>
		<td>${elem.gender}</td>
		<td>${elem.group}</td>
		</tr>
	</c:if>
</c:forEach>
<c:forEach var="elem" items="${ad.getAddList()}">
	<c:if test="${elem.group == '친구'}">
		<tr>
		<td>${elem.username}</td>
		<td>${elem.tel}</td>
		<td>${elem.email}</td>
		<td>${elem.gender}</td>
		<td>${elem.group}</td>
		</tr>
	</c:if>
</c:forEach>
<c:forEach var="elem" items="${ad.getAddList()}">
	<c:if test="${elem.group == '직장'}">
		<tr>
		<td>${elem.username}</td>
		<td>${elem.tel}</td>
		<td>${elem.email}</td>
		<td>${elem.gender}</td>
		<td>${elem.group}</td>
		</tr>
	</c:if>
</c:forEach>
</table>
</div>

</body>
</html>