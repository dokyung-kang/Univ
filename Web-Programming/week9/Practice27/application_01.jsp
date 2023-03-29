<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<!-- 20210750 컴퓨터학과 강도경 chrome -->
<html>
<head>
<meta charset="UTF-8">
<title>Application Object: 01</title>
</head>
<body>
<form action="application_02.jsp">
아이디 : &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
<input name="username" type="text"> <br>
원하는 세션 지속시간(분) : <input name="session" type="text"> <br>
<br>
<%
application.setAttribute("count", 0);
%>
<input type="submit" value="로그인">
<input type="button" value="취소">
</form>
</body>
</html>