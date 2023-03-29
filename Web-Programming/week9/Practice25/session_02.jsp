<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<!-- 20210750 컴퓨터학과 강도경 chrome -->
<html>
<head>
<meta charset="UTF-8">
<title>Session Object: 02</title>
</head>
<body>
<%= request.getParameter("username") %>님 환영합니다. <br>
<br>
세션 ID: <%= session.getId() %> <br>
세션 지속시간(default): <%= session.getMaxInactiveInterval() %> 초<br>
<br>
<a href="session_03.jsp">session_03.jsp로 가기</a>
</body>
</html>