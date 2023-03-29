<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="jspbook.pr01.*"%>
<!DOCTYPE html>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<% request.setCharacterEncoding("UTF-8"); %>
<jsp:useBean id="li" class="jspbook.pr01.AddrManager" scope="application"/>
<html>
<head>
<meta charset="UTF-8">
<title>주소록 목록(그룹별 보기)</title>
</head>
<style>
table, td {
	text-align: center;
}
</style>
<body>
<div align="center">
<h2>주소록(그룹별 보기)</h2>
<hr>
<a href="addr_form.jsp">주소추가</a>
<br><br>
<table border=1>
<tr>
<td width=70>이름</td>
<td width=200>전화번호</td>
<td width=250>이메일</td>
<td width=60>성별</td>
<td width=60>그룹</td>
</tr>
<%
int rpp = 2;
int i = 0;
int currentPage;
int startIndex;
int lastIndex;
int allpage = li.getAddrList().size();

String[] str = {"가족", "친구", "직장"};

String sindex = request.getParameter("sindex");

if(sindex == null)
	currentPage = 1;
else
	currentPage = Integer.parseInt(sindex);

startIndex = rpp * (currentPage - 1);
lastIndex = rpp * currentPage;

for(int k = 0; k < 3; k++){
	for(AddrBean ab : li.getAddrList()){
		if(str[k].equals(ab.getGroup())){
			if(i >= startIndex){
%>
<tr>
<td><%=ab.getUsername() %></td>
<td><%=ab.getTel() %></td>
<td><%=ab.getEmail() %></td>
<td><%=ab.getGender() %></td>
<td><%=ab.getGroup() %></td>
</tr>
<%
			}
			i++;
			if(i == lastIndex)
				break;
		}
	}
	if(i == lastIndex)
		break;
}
%>
</table>
<br>
<%
int j;
for(j = 0; j < allpage / rpp; j++){
	if(currentPage == (j+1))
		out.println(j+1);
	else
		out.println("<a href=\"addr_list_group.jsp?sindex=" + (j+1) + "\">" + (j+1) + "</a>");
	if(j != (allpage / rpp) - 1)
		out.println("|");
}
if((allpage % rpp != 0) && (j == allpage / rpp)){
	if(allpage > rpp)
		out.println("|");
	if(currentPage == (j+1))
		out.println(j+1);
	else
		out.println("<a href=\"addr_list_group.jsp?sindex=" + (j+1) + "\">" + (j+1) + "</a>");
}
%>
</div>
</body>
</html>