<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="jspbook.pr03.*"%>
<!DOCTYPE html>
<%
request.setCharacterEncoding("UTF-8");
%>
<jsp:useBean id="lect" class="jspbook.pr03.LectureBean" scope="page"/>
<jsp:setProperty name="lect" property="*"/>
<jsp:useBean id="lc" class="jspbook.pr03.LectureManager" scope="application"/>
<%
	lc.add(lect);
%>
<html>
<head>
<meta charset="UTF-8">
<title>시간표 작성</title>
</head>
<style>
table, td, th, tr {
	border: 1px solid;
}
table {
	border-collapse: collapse;
	width: 500px;
	height: 400px;
}
th {
	font-size: 20px;
	width: 100px;
}
tr {
	height: 40px;
}
td {
	font-size: 13px;
	text-align: center;
	width: 50px;
}
.left_column{
	font-size: 20px; 
	font-weight: bold;
}
.mandatory {
	background-color: #ffe08c;
}
.selective {
	background-color: #b2ccff;
}
.etc{
	background-color: #bdbdbd;
}
</style>
<body>
<div align=center>
<form method="post" action="Problem3.jsp">
과목타임 : 
<select name="type">
<option value="0">전공필수</option>
<option value="1">전공선택</option>
<option value="2">교양</option>
<option value="3">자유선택</option>
</select>
과목명 : 
<select name="title">
<option value="0">웹프로그래밍</option>
<option value="1">운영체제</option>
<option value="2">소프트웨어프로그래밍</option>
<option value="3">데이터베이스개론</option>
<option value="4">자료구조</option>
<option value="5">네트워크</option>
<option value="6">창의와감성</option>
<option value="7">사회봉사</option>
</select>
요일 : 
<select name="day">
<option value="0">월</option>
<option value="1">화</option>
<option value="2">수</option>
<option value="3">목</option>
<option value="4">금</option>
</select>
시간 : 
<select name="time">
<option value="1">1</option>
<option value="2">2</option>
<option value="3">3</option>
<option value="4">4</option>
<option value="5">5</option>
<option value="6">6</option>
</select>
연강여부 :
<select name="consecutive">
<option value="1">1</option>
<option value="2">2</option>
<option value="3">3</option>
<option value="4">4</option>
</select>
&nbsp; &nbsp; &nbsp;
<input type="submit" value="등록"/> 
</form>
<hr>
<%
	for(LectureBean ab : lc.getLectList()){
		if(ab.getType() != -1){
			lc.bulidMatrix();
		}
	}
%>
<h2>강의 시간표</h2>
<table>
<tr>
<th>2학년</th>
<th> 월 </th>
<th> 화 </th>
<th> 수 </th>
<th> 목 </th>
<th> 금 </th>
</tr>
<%
int i, j;

String[] titleNames = {
		"웹프로그래밍", "운영체제", "소프트웨어프로그래밍", "데이터베이스개론", "자료구조", "네트워크", 
		"창의와 감성", "사회봉사"};

for(i = 0; i < 6; i++){
	out.println("<tr>" + " <!-- " + (i + 1) + "교시 -->");
	out.print("<td class=\"left_column\">");
	out.print(i + 1);
	out.println("</td>");
	for(j = 0; j < 5; j++){
		if(lc.spanMatrix[i][j] != 0){
			out.print("<td ");
			//종류
			if(lc.typeMatrix[i][j] == 1)
				out.print("class=\"mandatory\" ");
			else if(lc.typeMatrix[i][j] == 2)
				out.print("class=\"selective\" ");
			else if(lc.typeMatrix[i][j] == 3)
				out.print("class=\"etc\" ");
			//연강
			if(lc.spanMatrix[i][j] == 2)
				out.print("rowspan=\"2\"");
			else if(lc.spanMatrix[i][j] == 3)
				out.print("rowspan=\"3\"");
			else if(lc.spanMatrix[i][j] == 4)
				out.print("rowspan=\"4\"");
			out.print(">");
			if(lc.titleMatrix[i][j] == -1)
				out.print("&nbsp;");
			else
				out.print(titleNames[lc.titleMatrix[i][j]]);
			out.println("</td>");
		}
		if(lect.getType() == -1){
			out.println("<td> &nbsp </td>");
		}
	}
	out.println("</tr>");
}
%>
</table>
<br>
<hr>
<br>
<%
	for(LectureBean ab : lc.getLectList()){
		if(ab.getType() != -1){
			out.println(ab.toString());
			out.println("<br>");
			lc.bulidMatrix();
		}
	}
%>
</div>
</body>
</html>