<%@ tag language="java" body-content="scriptless" pageEncoding="UTF-8"  import="jspbook.pr38.*"%>
<% request.setCharacterEncoding("UTF-8"); %>
<jsp:useBean id="login" class="jspbook.pr38.LoginBean" scope="page"/>
<jsp:setProperty name="login" property="*"/>
<%@ attribute name="brd"%>
<%@ attribute name="color"%>
<style>
table {
height: 300px;
width: 350px;
text-align: center;
}

</style>
<div align=center>
<h2><jsp:doBody/></h2>
<table bgcolor="${color}" border="${brd}">
<tr>
<td>이름:</td>
<td><%=login.getId() %></td>
</tr>
<tr>
<td>패스워드:</td>
<td><%=login.getPw() %></td>
</tr>
<tr>
<td>이메일:</td>
<td><%=login.getEmail() %></td>
</tr>
<tr>
<td>성별:</td>
<td><%=login.getGender() %></td>
</tr>
<tr>
<td>생일:</td>
<td><%=login.getBirth() %></td>
</tr>
<tr>
<td colspan=2>
<%
out.println(login.getId() + "씨는 ");
if(login.getGender() == 0)
	out.println("남성이고. ");
else
	out.println("여성이고, ");
if(login.isGrownUp() == true)
	out.println("성인입니다.");
else
	out.println("성인이 아닙니다.");
%>
</td>
</tr>
</table>
</div>