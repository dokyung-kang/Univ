<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.Calendar"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Calendar</title>
</head>
<body>
<%
Calendar cal = Calendar.getInstance();
int year = cal.get(Calendar.YEAR);
int month = cal.get(Calendar.MONTH);
int day;
int start;
int end;
int i, j;


if ((request.getParameter("YEAR") != null) && (request.getParameter("MONTH") != null)){
	cal.set(Integer.parseInt(request.getParameter("YEAR")),  Integer.parseInt(request.getParameter("MONTH")) - 1, 1);
	out.println("<h2>" + request.getParameter("YEAR") + "년 " + request.getParameter("MONTH") + "월" + "</h2>");
}
else{
	cal.set(year, month, 1);
	out.println("<h2>" + year + "년 " + (month + 1) + "월" + "</h2>");
}
out.println("<hr>");

day = cal.get(Calendar.DAY_OF_WEEK);
start = cal.getMinimum(Calendar.DATE);
end = cal.getActualMaximum(Calendar.DAY_OF_MONTH);

for(i = 0; i < day - 1; i++)
	out.println("&nbsp&nbsp&nbsp&nbsp&nbsp");
for(i = 1; i <= end; i++){
	out.println(i + " &nbsp&nbsp&nbsp");
	if ((i + day - 1) % 7 == 0)
		out.println("<br>");
}
%>
</body>
</html>