<%@ tag  body-content="empty" language="java" pageEncoding="UTF-8"%>
<%@ attribute name="color"%>
<% request.setCharacterEncoding("UTF-8"); %>
<font color="${color}">
<%
out.println(request.getParameter("id") + "님 환영합니다!!" + "<br>");
%>
</font>