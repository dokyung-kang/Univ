<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
   <% request.setCharacterEncoding("UTF-8"); %>
   <%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Calculator</title>
</head>
<style>
table,td,th {
border: 2px solid;
 border-color: #e0e0e0;
}
th,td {
vertical-align: middle;
text-align: center;
}
table {
width: 400px;
height: 400px;
border: none;
}
td {
width: 200px;
}
th{
border: none;
font-size: 30px;
background-color: #32ccfe;
height: 50px;
}    
</style>
<body>
<div align="center">

<form method=post action=calc_result.jsp>
<table>
<tr>
<th colspan="2">CalCuLaTor</th>
</tr>
<tr>
<td>
<img src="image/cal.jpg">
</td>
<td>
<input style="text-align:center;" type="text" name=num1 value="${param.op1}" size="8" readonly> <br>
<br>
${param.operator} <br>
<br>
<input style="text-align:center;" type="text" name=num2 value="${param.op2}" size="8" readonly> <br>
<br>
= 
<br>
<br>
<c:if test="${param.operator == '+'}">
<input style="text-align:center;" type="text" name=result size="8" value="${param.op1 + param.op2}" readonly> <br>
</c:if>
<c:if test="${param.operator == '-'}">
<input style="text-align:center;" type="text" name=result size="8" value="${param.op1 - param.op2}" readonly> <br>
</c:if>
<c:if test="${param.operator == '*'}">
<input style="text-align:center;" type="text" name=result size="8" value="${param.op1 * param.op2}" readonly> <br>
</c:if>
<c:if test="${param.operator == '/'}">
<input style="text-align:center;" type="text" name=result size="8" value="${param.op1 / param.op2}" readonly> <br>
</c:if>
<br>
</td>
</tr>
<tr>
<th colspan="2"></th>
</tr>
</table>
</form>

</div>
</body>
</html>