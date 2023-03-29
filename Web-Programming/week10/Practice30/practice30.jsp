<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.*"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>시간표 작성</title>
</head>
<body>
<div align="center">
<form method="post" action="practice30.jsp">
과목타임 : 
<select name="lectureType">
<option value="0">전공필수</option>
<option value="1">전공선택</option>
<option value="2">교양</option>
<option value="3">자유선택</option>
</select>
과목명 : 
<select name="lectureTitle">
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
	request.setCharacterEncoding("UTF-8");

	String[] typeNames = {"전공필수", "전공선택", "교양", "자유선택"};
	String[] titleNames = {"웹프로그래밍", "운영체제", "소프트웨어프로그래밍", "데이터베이스개론", "자료구조", "네트워크", "창의와감성", "사회봉사"};
	String[] days = {"월", "화", "수", "목", "금"};
	
	
	
	if(request.getParameter("lectureTitle") != null){
		int type = Integer.parseInt(request.getParameter("lectureType"));
		int title = Integer.parseInt(request.getParameter("lectureTitle"));
		int d = Integer.parseInt(request.getParameter("day"));
		String time = request.getParameter("time");
		String con = request.getParameter("consecutive");
		String user = request.getParameter("username");
		String phone = request.getParameter("phone");
		
		String takes = typeNames[type] + "/" + titleNames[title] + "/" + days[d] + "/" + time + "/" + con;
		
		ArrayList<String> list = (ArrayList<String>)session.getAttribute("timetable");
	
		if(list == null)
			list = new ArrayList<String>();
		list.add(takes);
		session.setAttribute("timetable", list);
		
		if(list == null)
			out.println(" ");
		else {
			for(String timelist : list)
				out.println(timelist + "<br>");
		}
	}
%>

</div>
</body>
</html>