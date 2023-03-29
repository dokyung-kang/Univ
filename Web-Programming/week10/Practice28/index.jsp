<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>이상한 나라</title>
<style>
    th,td {
        vertical-align: middle;
    }
    table {
        width: 600px;
        height: 300px;
    }  
</style>
</head>
<body>
<div align="center">
<h2> Alice in Wonderland </h2>
<table>
<tr>
<td>
<jsp:include page="viewer.jsp"></jsp:include>
</td>
<td>
&nbsp;
</td>
<td>
<jsp:include page="login.jsp"></jsp:include>
</td>
</tr>
</table>
</div>
</body>
</html>