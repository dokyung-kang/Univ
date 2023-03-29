<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.Calendar"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>calendar.jsp</title>
</head>
<style>
    table, td {
        border: 1px solid;
    }
    table {
        border-collapse: collapse;
        width: 600px;
        height: 250px;
		text-align: center;
    }
 	h4 {
 		position: relative; 
 		left: 240px;
 	}
</style>
<body>
<%!
public String parseDay(int cnt, String day){
	if (day.equals("일"))
		return "<font color=\"red\">" + day + "</font>";
	else if (day.equals("월"))
		return day;
	else if (day.equals("화"))
		return day;
	else if (day.equals("수"))
		return day;
	else if (day.equals("목"))
		return day;
	else if (day.equals("금"))
		return day;
	else if (day.equals("토"))
		return "<font color=\"blue\">" + day + "</font>";
	else if (day.equals("1"))
		return "<font color=\"red\">" + cnt + "</font>";
	else if (day.equals("0"))
		return "<font color=\"blue\">" + cnt + "</font>";
	else 
		return Integer.toString(cnt);
}
%>
<%
Calendar today = Calendar.getInstance();


int year = today.get(Calendar.YEAR);
int month = today.get(Calendar.MONTH);
int date = today.get(Calendar.DATE);

Calendar cal = Calendar.getInstance();
year = cal.get(Calendar.YEAR);
month = cal.get(Calendar.MONTH);

int cnt = 0;

int i, j;

out.println("<div align=\"center\">");
out.println("<h4>" + year + "-" + (month + 1) + "-" + date + "</h4>");

cal.set(year, month, 1);

date = cal.get(Calendar.DATE);
int day = cal.get(Calendar.DAY_OF_WEEK);
int start = cal.getMinimum(Calendar.DATE);
int end = cal.getActualMaximum(Calendar.DAY_OF_MONTH);
out.println("<table>");
out.println("<tr>");
out.println("<td>" + parseDay(cnt, "일") + "</td>");
out.println("<td>" + parseDay(cnt, "월") + "</td>");
out.println("<td>" + parseDay(cnt, "화") + "</td>");
out.println("<td>" + parseDay(cnt, "수") + "</td>");
out.println("<td>" + parseDay(cnt, "목") + "</td>");
out.println("<td>" + parseDay(cnt, "금") + "</td>");
out.println("<td>" + parseDay(cnt, "토") + "</td>");
out.println("</tr>");
out.println("<tr>");
for(i = 0; i < day - 1; i++)
	out.println("<td> &nbsp </td>");
cnt++;
for(i = 1; i <= end; i++){
	out.println("<td>" + parseDay(cnt, Integer.toString((i + day - 1) % 7)) + "</td>");
	if ((i + day - 1) % 7 == 0){
		out.println("</tr>");
		out.println("<tr>");
	}
	cnt++;
}
while(!((i + day - 1) % 7 == 0)){
	out.println("<td> &nbsp </td>");
	i++;
}
out.println("</tr>");
out.println("</table>");
out.println("</div>");
%>
</body>
</html>