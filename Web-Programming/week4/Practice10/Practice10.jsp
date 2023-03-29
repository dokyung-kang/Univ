<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!-- 20210750 컴퓨터학과 강도경 chrome -->     
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Practice10</title>
<style type="text/css">
table {
	text-align: center;
	width: 650px;
	height: 200px;
}
table, tr, td {
	border: 1px solid #444444;
}
</style>
</head>
<body>
<%
int i, j;
	
out.println("<div align=\"center\">");
out.println("<table>");
for(i = 0; i < 5; i++){
	out.println("<tr>");
	if (i == 0){
		out.println("<td><font color=\"red\">일</font></td>");
		out.println("<td>월</td>");
		out.println("<td>화</td>");
		out.println("<td>수</td>");
		out.println("<td>목</td>");
		out.println("<td>금</td>");
		out.println("<td><font color=\"blue\">토</font></td>");
	}
	else{
		for(j = 0; j < 7; j++){
			out.println("<td> &nbsp </td>");
		}
	}
	out.println("</tr>");
}
out.println("</table>");
out.println("</div>");
%>
</body>
</html>