<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<!-- 20210750 컴퓨터학과 강도경 chrome -->
<html>
<head>
<meta charset="UTF-8">
<title>Application Object: 02</title>
</head>
<body>
<%
	application.setAttribute("user", request.getParameter("username"));

	int second = Integer.parseInt(request.getParameter("session"));
	session.setMaxInactiveInterval(second * 60);	

	Integer count = (Integer)application.getAttribute("count");
	int cnt;
	
	if(count == null)
		cnt = 0;
	cnt = count.intValue() + 1;
	application.setAttribute("count", cnt);
%>
<%= application.getAttribute("user") %>님 환영합니다. <br>
<br>
세션 ID: <%= session.getId() %> <br>
세션 지속시간: <%= session.getMaxInactiveInterval() %> 초<br>
<br>
오늘의 접속자 수: <%= cnt %>
</body>
</html>