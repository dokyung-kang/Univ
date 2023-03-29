<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.Calendar"%>
<!-- 20210750 컴퓨터학과 강도경 chrome -->
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Calendar</title>
</head>
<body>
<%
int year = 1919;
int month = 3;

int date;
int day;
int end;
int i, j;

Calendar cal = Calendar.getInstance();
cal.set(year, (month - 1), 1);

date = cal.get(Calendar.DATE);
day = cal.get(Calendar.DAY_OF_WEEK);
end = cal.getActualMaximum(Calendar.DAY_OF_MONTH);

out.println("<h2>" + year + "년 " + month + "월 </h2>");
out.println("<hr>");

for(i = 0; i < day - 1; i++)
	out.println("&nbsp&nbsp&nbsp&nbsp&nbsp");
for(i = 1; i <= end; i++){
	out.println(i + "&nbsp&nbsp&nbsp&nbsp");
	if ((i + day - 1) % 7 == 0)
		out.println("<br>");
}
%>
</body>
</html>