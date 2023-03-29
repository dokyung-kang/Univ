<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!-- 20210750 컴퓨터학과 강도경 chrome -->
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>calender.jsp</title>
</head>
<style type="text/css">
#inTable {
	width: 200px;
	height: 150px;;
	text-align: center;
}
#inTrTd {
	border: 1px solid gray;
}
</style>
</head>
<body>
<%
int i, j;
	
out.println("<div align=\"center\">");
out.println("<table id=\"inTable\">");
for(i = 0; i < 5; i++){
	out.println("<tr id=\"inTrTd\">");
	if (i == 0){
		out.println("<td id=\"inTrTd\"><font color=\"red\">일</font></td>");
		out.println("<td id=\"inTrTd\">월</td>");
		out.println("<td id=\"inTrTd\">화</td>");
		out.println("<td id=\"inTrTd\">수</td>");
		out.println("<td id=\"inTrTd\">목</td>");
		out.println("<td id=\"inTrTd\">금</td>");
		out.println("<td id=\"inTrTd\"><font color=\"blue\">토</font></td>");
	}
	else{
		for(j = 0; j < 7; j++){
			out.println("<td id=\"inTrTd\"> &nbsp </td>");
		}
	}
	out.println("</tr>");
}
out.println("</table>");
out.println("</div>");
%>
</body>
</html>