<%@ tag body-content="scriptless" language="java" pageEncoding="UTF-8"%>
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
<h2><jsp:doBody/></h2>
<hr>
<table style=>
<%
int i, j;

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
%>
</table>