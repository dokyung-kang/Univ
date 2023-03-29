<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="jspbook.pr33.*"%>
<!DOCTYPE html>
<% request.setCharacterEncoding("UTF-8"); %>
<jsp:useBean id="login" class="jspbook.pr33.LoginBean" scope="page"/>
<jsp:setProperty name="login" property="*"/>

<html>
<head>
<meta charset="UTF-8">
<title>회원가입</title>
</head>
<body>
<div align="center">
<h2>등록내용</h2>
이름 : <%=login.getId() %><p>
패스워드 : <%=login.getPw() %><p>
이메일 : <%=login.getEmail() %><p>
성별 : <%=login.getGender() %><p>
생일 : <%=login.getBirth() %><p>
<hr>
<%
out.println(login.getId() + "씨는 ");
if(login.getGender() == 0)
	out.println("남성이고. ");
else
	out.println("여성이고, ");
if(login.isGrownUp() == true)
	out.println("성인입니다.");
else
	out.println("성인이 아닙니다.");
%>
</div>

</body>
</html>