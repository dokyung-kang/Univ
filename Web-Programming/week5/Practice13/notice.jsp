<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" isErrorPage="true"%>
<!-- 20210750 컴퓨터학과 강도경 chrome -->
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>notice</title>
</head>
<style>
    table, td, th {
        border: 2px solid;
        border-color: #FFFFFF;
        }
    th, td {
        vertical-align: middle;
        text-align : center;
    }
    table {
        border-collapse: collapse;
        width: 600px;
        height: 400px;
    }
    th {
        background-color: #ffdab9;
    }
    td {
        background-color: #fff5e0;
        width: 250px;
    }    
</style>
<body>
   <div align="center">
        <img src="image/eclass_title.jpg">
       	<table>
       	<tr>
        	<th>오류가 발생했습니다.</th>
       	</tr>
       	<tr>
    		<td>
             	<img src="image/flower.gif">
            	<p>요류 발생시간: <%= new java.util.Date() %></p>
            	<p>최대한 빨리 조치하겠습니다.</p>
        	</td>
		</tr>
		</table>
	</div>
</body>
</html>