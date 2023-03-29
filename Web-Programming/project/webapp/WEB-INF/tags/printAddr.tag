<%@ tag language="java" body-content="scriptless"  pageEncoding="UTF-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<% request.setCharacterEncoding("UTF-8"); %>

<h2><jsp:doBody/></h2>
이름 : 
<c:out value="${param.username}"></c:out>
<br>
<br>
전화번호 : 
<c:out value="${param.tel}"></c:out>
<br>
<br>
이메일 : 
<c:out value="${param.email}"></c:out>
<br>
<br>
성별 : 
<c:out value="${param.gender}"></c:out>
<br>
<br>
그룹 : 
<c:out value="${param.group}"></c:out>
<br>
<br>
<hr>
<a href="addr_list.jsp">전체 목록 보기</a>
<a>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</a>
<a href="addr_list_group.jsp">그룹별 목록 보기</a>