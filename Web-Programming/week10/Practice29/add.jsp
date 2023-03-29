<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.*"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>주소록</title>
</head>
<%
	request.setCharacterEncoding("UTF-8");

	String user = request.getParameter("username");
	String phone = request.getParameter("phone");
	String addr = user + ", " + phone;
	
	ArrayList<String> list = (ArrayList<String>)session.getAttribute("addrbook");

	if(list == null)
		list = new ArrayList<String>();
	list.add(addr);
	session.setAttribute("addrbook", list);
%>	
<body>
<div align="center">
<h2>주소록</h2>
<hr>
<% 	
	if(list == null)
		out.println("등록한 주소가 없습니다.");
	else {
		int i = 1;
		for(String addrlist : list)
			out.println(i++ + ". " + addrlist + "<br>");
	}
%>
</div>
</body>
</html>