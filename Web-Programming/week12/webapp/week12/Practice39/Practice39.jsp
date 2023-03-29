<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="jspbook.pr39.*"%>
<!DOCTYPE html>
<%
request.setCharacterEncoding("UTF-8");
%>
<jsp:useBean id="lect" class="jspbook.pr39.LectureBean" scope="page"/>
<jsp:setProperty name="lect" property="*"/>
<jsp:useBean id="lc" class="jspbook.pr39.LectureManager" scope="application"/>
<%
	lc.add(lect);
%>
<html>
<head>
<meta charset="UTF-8">
<title>시간표 작성</title>
</head>
<body>
<div align=center>
<form method="post" action="Practice39.jsp">
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
			out.println(ab.toString());
			out.println("<br>");
			lc.bulidMatrix();
		}
	}
%>
</body>
</html>