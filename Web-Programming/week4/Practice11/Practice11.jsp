<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!-- 20210750 컴퓨터학과 강도경 chrome --> 
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Practice11</title>
<style>
table {
	width: 500px;
	height: 450px;
}
table, td{
	border: 1px solid #444444;
}
td{
padding: 0 0 0 12px;
}
</style>
</head>
<body>
<%
int i, j;


out.println("<div align=\"center\">");
out.println("<h1>구구단 출력</h1>");
out.println("<hr>");

out.println("<table>");
	out.println("<tr>");
for(i = 0; i < 8; i++){
	if (i == 4){
		out.println("</tr>");
		out.println("<tr>");
	}
	out.println("<td>");
	for(j = 1; j <= 9; j++){
		out.println((i + 2) + " * " + j + " = " + (i + 2) * j + "<br>");
	}
	out.println("</td>");
}
out.println("</tr>");
out.println("</table>");
out.println("<div>");
%>
</body>
</html>