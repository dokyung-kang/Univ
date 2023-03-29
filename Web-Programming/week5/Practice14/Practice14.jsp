<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.Calendar"%>
<!-- 20210750 컴퓨터학과 강도경 chrome -->
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Practice 14</title>
</head>
<body>
<%
Calendar cal = Calendar.getInstance();
int year = cal.get(Calendar.YEAR);
int month = cal.get(Calendar.MONTH);
int date = cal.get(Calendar.DATE);
int day = cal.get(Calendar.DAY_OF_WEEK);
int start = cal.getMinimum(Calendar.DATE);
int end = cal.getActualMaximum(Calendar.DAY_OF_MONTH);
String dayK = "";

if (day == 0)
	dayK = "토요일";
else if (day == 1)
	dayK = "일요일";
else if (day == 2)
	dayK = "월요일";
else if (day == 3)
	dayK = "화요일";
else if (day == 4)
	dayK = "수요일";
else if (day == 5)
	dayK = "목요일";
else if (day == 6)
	dayK = "금요일";


out.println("오늘은 " + year + "년 " + (month + 1) + "월 " + date + "일 " + dayK + "입니다.");
out.println("<br> &nbsp <br>");
out.println("이번 달은 " + start + "일부터 시작하여 " + end + "일에 끝납니다.");
out.println("<br> &nbsp <br>");

cal.set(2002, Calendar.FEBRUARY, 5);
year = cal.get(Calendar.YEAR);
month = cal.get(Calendar.MONTH);
date = cal.get(Calendar.DATE);
day = cal.get(Calendar.DAY_OF_WEEK);
start = cal.getMinimum(Calendar.DATE);
end = cal.getActualMaximum(Calendar.DAY_OF_MONTH);

if (day == 0)
	dayK = "토요일";
else if (day == 1)
	dayK = "일요일";
else if (day == 2)
	dayK = "월요일";
else if (day == 3)
	dayK = "화요일";
else if (day == 4)
	dayK = "수요일";
else if (day == 5)
	dayK = "목요일";
else if (day == 6)
	dayK = "금요일";

out.println("내 생일 " + year + "년 " + (month + 1) + "월 " + date + "일은 " + dayK + "입니다.");
%>
</body>
</html>