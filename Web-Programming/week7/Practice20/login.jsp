<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>이클래스 로그인</title>
</head>
<style>
    th, td {
        vertical-align: middle;
    }
    table {
        border-collapse: collapse;
        font-weight: bold;
        width: 610px;
        height: 200px;
    }
    td {
        font-size: 13px;
        width: 300px;
    }
</style>

<body>
    <div align="center">
        <img src="image/eclass_title.jpg">
        <h2>로그인</h2>
        <hr>
        <form name="form1" method=post action=result.jsp>
        	<table>
	            <tr>
	                <th rowspan="5">
	                    <img src="image/eclass_logo.png">
	                </th>
	                <td>회원님의 아이디와 비밀번호를 정확히 입력하세요.</td>
	            </tr>
                <tr>
                    <td>
                        &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
                        <select name="type">
                            <option value="학부생">학부생</option>
                        </select>
                    </td>
                </tr>
                <tr>
                    <td>
                        아이디 &nbsp; &nbsp; &nbsp;   
                        <input type="text" style="background-color: #ffff99"  name="strID" size="20" maxlength="20">
                    </td>
                </tr>
                <tr>
                    <td>
                        비밀번호&nbsp; &nbsp;
                        <input type="password" style="background-color: #ffff99"  name="strPwd" size="20" maxlength="20">
                    </td>
                </tr>
                <tr>
                    <td>
                        <input type="submit" value="로그인">
                        <input type="button" value="가입하기">
                    </td>
                </tr>
        	</table>
        </form>
    </div>

</body>
</html>