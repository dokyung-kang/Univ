<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="jspbook.ch07.*"%>
<!DOCTYPE html>
<jsp:useBean id="am" class="jspbook.ch07.AddrManager" scope="application"/>
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
<h2>주소록 (전체보기)</h2>
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
<%
for(AddrBean ab : am.getAddrList()){
%>
<tr>
<td><%=ab.getUsername() %></td>
<td><%=ab.getTel() %></td>
<td><%=ab.getEmail() %></td>
<td><%=ab.getGender() %></td>
<td><%=ab.getGroup() %></td>
</tr>
<%
	}
%>
</table>
</div>
</body>
</html>