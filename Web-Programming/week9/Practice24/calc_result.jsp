<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<!-- 20210750 컴퓨터학과 강도경 chrome -->
<html>
<head>
<meta charset="UTF-8">
<title>Calculator</title>
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
</head>
<body>
<%
	int n1 = Integer.parseInt(request.getParameter("num1"));
	int n2 = Integer.parseInt(request.getParameter("num2"));
	
	long result = 0;
	
	switch(request.getParameter("op")){
		case "+":
			result = n1 + n2;
			break;
		case "-":
			result = n1 - n2;
			break;
		case "*":
			result = n1 * n2;
			break;
		case "/":
			result = n1 / n2;
			break;
		default:
			break;
	}
%>

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
				<input style="text-align:center;" type="text" name=num1 value=<%=n1 %> size="8" readonly> <br>
				<br>
				<%= request.getParameter("op") %> <br>
				<br>
				<input style="text-align:center;" type="text" name=num2 value=<%=n1 %> size="8" readonly> <br>
				<br>
				= <br>
				<br>
				<input style="text-align:center;" type="text" name=result size="8" value=<%=result %> readonly> <br>
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