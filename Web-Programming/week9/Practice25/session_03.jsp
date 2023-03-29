<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<!-- 20210750 컴퓨터학과 강도경 chrome -->
<html>
<head>
<meta charset="UTF-8">
<title>Session Object: 03</title>
</head>
<body>
<%
long start = session.getCreationTime();
long last = session.getLastAccessedTime();

long passed = (last - start) / 1000;

out.println("세션이 생성된 후 " + passed + "초가 지났습니다.");
%>
</body>
</html>