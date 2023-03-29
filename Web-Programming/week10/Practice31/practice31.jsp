<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.*"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>컴퓨터학과 2학년 시간표</title>
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
<%!
	int[][] lectureType = {
			{0, 1, 1, 0, 1},	//1교시-0 : no class
			{1, 0, 0, 0, 2},	//2교시-1 : 전공 필수
			{0, 0, 2, 0, 4},	//3교시-2 : 전공 선택
			{2, 3, 0, 3, 0},	//4교시-3 : 교양
			{0, 0, 0, 2, 0},	//5교시-4 : 자유선택
			{0, 0, 0, 0, 0}		//6교시
	};

	int[][] consecutive = {
			{1, 2, 1, 1, 1},	//1교시
			{2, 0, 1, 1, 1},	//2교시
			{0, 1, 1, 1 ,4},	//3교시
			{2, 1, 1, 1, 0},	//4교시
			{0, 1, 1, 2, 0},	//5교시
			{1, 1, 1, 0, 0}		//6교시
	};
	
	int[][] lectureTitle = {
			{-1, 4, 5, -1, 5},	//1교시
			{3, -1, -1, -1, 1},	//2교시
			{-1, -1, 1, -1, 7},	//3교시
			{0, 6, -1, 6, -1},	//4교시
			{-1, -1, -1, 2, -1},	//5교시
			{-1, -1, -1, -1, -1}		//6교시
	};
	
	String[] titleNames = {
			"웹프로그래밍", "운영체제", "소프트웨어프로그래밍", "데이터베이스개론", "자료구조", "네트워크", 
			"창의와 감성", "사회봉사"
	};
%>
<body>
<div align=center>
<h3>강의 시간표</h3>
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

for(i = 0; i < 6; i++){
	out.println("<tr>" + " <!-- " + (i + 1) + "교시 -->");
	out.print("<td class=\"left_column\">");
	out.print(i + 1);
	out.println("</td>");
	for(j = 0; j < 5; j++){
		if(consecutive[i][j] != 0){
			out.print("<td ");
			//종류
			if(lectureType[i][j] == 1)
				out.print("class=\"mandatory\" ");
			else if(lectureType[i][j] == 2)
				out.print("class=\"selective\" ");
			else if(lectureType[i][j] == 3)
				out.print("class=\"etc\" ");
			//연강
			if(consecutive[i][j] == 2)
				out.print("rowspan=\"2\"");
			else if(consecutive[i][j] == 4)
				out.print("rowspan=\"4\"");
			out.print(">");
			if(lectureTitle[i][j] == -1)
				out.print("&nbsp;");
			else
				out.print(titleNames[lectureTitle[i][j]]);
			out.println("</td>");
		}
	}
	out.println("</tr>");
}
%>
</table>
</div>
</body>
</html>