<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!-- 20210750 컴퓨터학과 강도경 chrome -->
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Practice 12</title>
<style type="text/css">
table {
    border-collapse: collapse;
}
h2 {
	text-align: center;
	}
#outTable {
    border-collapse: collapse;
	width: 510px;
}
</style>
</head>

<body>
<div align="center">
<h2>include 지시어 연습</h2>
<hr>
<p>
<table id="outTable">
	<tr>
	<td><font size=-1><%@include file="calender.jsp" %></font></td>
	<td width="15"><font size=-1> &nbsp </font></td>
	<td><font size=-1><%@include file="news.jsp" %></font></td>
	</tr>
</table>
</div>
</body>
</html>