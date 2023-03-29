<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>회원가입</title>
</head>
<style>
table, td, th {
border: 1px solid;
border-color: #979797;
}
th, td {
vertical-align: middle;
}
table {
border-collapse: collapse;
width: 500px;
height: 400px;
}
td {
width: 400px;
}
th {
font-weight: bold;
text-align: center;
background-color:  #ececec;
}
input.imageAlign {
vertical-align: middle;
}
</style>
<body>
<div align="center">
<img src="image/eclass_title.jpg">
<form name="form3" method=post action=practice38.jsp>
<table>
<tr>
<th colspan="2">회원 가입</th>
</tr>
<tr>
<th>아이디</th>
<td>
<input type="text" name="id" size="15" maxlength="15"> 
<input type="image" src="image/check.gif" class="imageAlign">
</td>
</tr>
<tr>
<th>패스워드</th>
<td>
<input type="password" name="pw" size="15" maxlength="15">
</td>
</tr>
<tr>
<th>성별</th>
<td>
<input type="radio" name="gender" value="0">남
<input type="radio" name="gender" value="1" checked>여
</td>
</tr>
<tr>
<th>국적</th>
<td>
<input type="text" value="대한민국"> 
<input type="button" value="국적변경" disabled> 
</td>
</tr>
<tr>
<th>휴대폰</th>
<td>
<select name="phone1">
<option value="0">010</option>
<option value="1">011</option>
<option value="2">017</option>
<option value="3">070</option>
</select>
-
<input type="text" size="4" maxlength="4" name="phone2"> 
-
<input type="text" size="4" maxlength="4" name="phone3">
</td>
</tr>
<tr>
<th>이메일</th>
<td><input type="text" size="45" maxlength="25" name="email"></td>
</tr>
<tr>
<th>생일</th>
<td><input type="date" name="birth"></td>
</tr>
<tr>
<th>관심분야</th>
<td>
<input type="checkbox" name="hobby" value="0">뉴스
<input type="checkbox" name="hobby" value="1" checked>맛집
<input type="checkbox" name="hobby" value="2">책
<input type="checkbox" name="hobby" value="3">영화
<input type="checkbox" name="hobby" value="4">여행
</td>
</tr>
<tr>
<th>가입인사</th>
<td>
<textarea rows="6" cols="60" name="memo"> 회원들에게 간단한 가입인사를 남겨주세요 </textarea>
</td> 
</tr>
<tr>
<th>증명사진</th>
<td><input type="file"></td>
</tr>
<tr>
<th colspan="2">
<input type="submit" value="가입하기">
<input type="reset" value="다시작성">
</th>
</tr>
</table>
</form>
</div>
</body>
</html>