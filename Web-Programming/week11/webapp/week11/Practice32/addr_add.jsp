<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="jspbook.ch07.*" %>
<!DOCTYPE html>
<% request.setCharacterEncoding("UTF-8"); %>

<jsp:useBean id="addr" class="jspbook.ch07.AddrBean"/>
<jsp:setProperty name="addr" property="*"/>
<jsp:useBean id="am" class="jspbook.ch07.AddrManager" scope="application"/>
<%
	am.add(addr);
%>
<html>
<head>
<meta charset="UTF-8">
<title>ch07 : 등록내용</title>
</head>
<body>
<div align="center">
<h2>등록내용</h2>
이름 : <jsp:getProperty name="addr" property="username"/><p>
전화번호 : <%=addr.getTel() %><p>
이메일 : <%=addr.getEmail() %><p>
성별 : <%=addr.getGender() %><p>
그룹 : <%=addr.getGroup() %><p>
<hr>
<a href="addr_list.jsp">전체 목록 보기</a>
<a>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</a>
<a href="addr_list_group.jsp">그룹별 목록 보기</a>
</div>
</body>
</html>