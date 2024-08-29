package lab3;

import java.util.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Scanner;
import java.time.format.DateTimeFormatter;
import java.time.LocalDate; 
import java.sql.Date;

public class Lab3 {

	public Lab3() {		// 생성자
		// JDBC 드라이버 로딩
		try {
			Class.forName("oracle.jdbc.driver.OracleDriver");	
		} catch (ClassNotFoundException ex) {
			ex.printStackTrace();
		}	
	}
	
	private static Connection getConnection() {
		String url = "jdbc:oracle:thin:@dblab.dongduk.ac.kr:1521/orclpdb";		
		String user = "scott2";
		String passwd = "TIGER";

		// DBMS와의 연결 생성
		Connection conn = null;
		try {
			conn = DriverManager.getConnection(url, user, passwd);
		} catch (SQLException e) {
			e.printStackTrace();
		}	 
		return conn;
	}
	
	public static void printDeptInfo(String deptName) {
		Connection conn = getConnection();
		PreparedStatement pStmt = null;			
		ResultSet rs = null;
		
		StringBuilder query = new StringBuilder();
		query.append("SELECT deptno, manager, COUNT(empno) AS numOfEmps ");	
		query.append("FROM EMP0750 JOIN DEPT0750 USING (deptno) ");
		query.append("WHERE dname = ? GROUP BY deptno, manager");
			
		try {
			pStmt = conn.prepareStatement(query.toString());
			pStmt.setString(1, deptName);
			rs = pStmt.executeQuery();					
			System.out.println();
			if (rs.next()) {	// 하나의 결과는 if 여러 결과는 while					
				String deptno = rs.getString("deptno");
				String manager = rs.getString("manager");
				String numOfEmps = rs.getString("numOfEmps");
				System.out.println("부서번호: " + deptno + ", 관리자 사번: " 
				+ manager + ", 소속 사원 수: " + numOfEmps);
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}			
	}
	
	public static void printAllEmpsInDept(String deptName) {
		Connection conn = getConnection();
		PreparedStatement pStmt = null;			
		ResultSet rs = null;
		
		StringBuilder query = new StringBuilder();
		query.append("SELECT empno, ename, job, sal, comm ");	
		query.append("FROM EMP0750 JOIN DEPT0750 USING (deptno) ");
		query.append("WHERE dname = ? ORDER BY empno ASC");
			
		try {
			pStmt = conn.prepareStatement(query.toString());
			pStmt.setString(1, deptName);
			rs = pStmt.executeQuery();					
			System.out.println();
			while (rs.next()) {	// 하나의 결과는 if 여러 결과는 while					
				String empno = rs.getString("empno");
				String ename = rs.getString("ename");
				String job = rs.getString("job");
				String sal = rs.getString("sal");
				String comm = rs.getString("comm");
				System.out.println("사번: " + empno + ", 이름: " 
				+ ename + ", 직무: " + job + ", 월급: " + sal + ", 수당: " + comm);
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
	public static int replaceManagerOfDept(String deptName, int newMgrNo, double newMgrComm) {
		Connection conn = getConnection();
		PreparedStatement pStmt = null;			
		ResultSet rs = null;
		int count;
		int oldMgrNo = 0;
		
		StringBuilder query1 = new StringBuilder();
		query1.append("SELECT manager ");	
		query1.append("FROM EMP0750 JOIN DEPT0750 USING (deptno) ");
		query1.append("WHERE dname = ? GROUP BY deptno, manager");
			
		try {
			pStmt = conn.prepareStatement(query1.toString());
			pStmt.setString(1, deptName);
			rs = pStmt.executeQuery();	
			if (rs.next()) {	// 하나의 결과는 if 여러 결과는 while
				oldMgrNo = rs.getInt("manager");
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}	
		
		
		StringBuilder query2 = new StringBuilder();
		query2.append("UPDATE DEPT0750 ");	
		query2.append("SET manager = ? ");
		query2.append("WHERE deptno IN (SELECT deptno FROM EMP0750 WHERE dname = ?)");
			
		try {
			pStmt = conn.prepareStatement(query2.toString());
			pStmt.setInt(1, newMgrNo);
			pStmt.setString(2, deptName);
			count = pStmt.executeUpdate();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		StringBuilder query3 = new StringBuilder();
		query3.append("UPDATE EMP0750 ");	
		query3.append("SET job = REPLACE(job, '(M)', '')");
		query3.append("WHERE empno = ?");
			
		try {
			pStmt = conn.prepareStatement(query3.toString());
			pStmt.setInt(1, oldMgrNo);
			count = pStmt.executeUpdate();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		StringBuilder query4 = new StringBuilder();
		query4.append("UPDATE EMP0750 ");	
		query4.append("SET job = job || '(M)'");
		query4.append("WHERE empno = ?");
			
		try {
			pStmt = conn.prepareStatement(query4.toString());
			pStmt.setInt(1, newMgrNo);
			count = pStmt.executeUpdate();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		

		StringBuilder query5 = new StringBuilder();
		query5.append("UPDATE EMP0750 ");	
		query5.append("SET comm = NVL(comm, 0) + ?");
		query5.append("WHERE empno = ?");
			
		try {
			pStmt = conn.prepareStatement(query5.toString());
			pStmt.setDouble(1, newMgrComm);
			pStmt.setInt(2, newMgrNo);
			count = pStmt.executeUpdate();	
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		return oldMgrNo; 
	}
	
	public static void printEmpInfo(int empNo) {
		Connection conn = getConnection();
		PreparedStatement pStmt = null;			
		ResultSet rs = null;
		
		StringBuilder query = new StringBuilder();
		query.append("SELECT * ");	
		query.append("FROM EMP0750 ");
		query.append("WHERE empno = ?");
			
		try {
			pStmt = conn.prepareStatement(query.toString());
			pStmt.setInt(1, empNo);
			rs = pStmt.executeQuery();	
			if (rs.next()) {	// 하나의 결과는 if 여러 결과는 while					
				String empno = rs.getString("empno");
				String ename = rs.getString("ename");
				String job = rs.getString("job");
				Date sqlDate = rs.getDate("hiredate");
				LocalDate localDate = sqlDate.toLocalDate();  	
				DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yyyy-MM-dd");   
				String DateStr = localDate.format(formatter); 
				String sal = rs.getString("sal");
				String comm = rs.getString("comm");
				String deptno = rs.getString("deptno");
				System.out.println(empno + " " + ename + " "
				+ job + " " + DateStr + " "
						+ sal + " " + comm + " " + deptno);
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}	
	}
	
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);	
		
		System.out.print("부서명을 입력하시오: ");
		String deptName = scanner.next();
		System.out.println();
		
		// printDeptInfo 호출
		printDeptInfo(deptName);
		// printAllEmpsInDept 호출
		printAllEmpsInDept(deptName);
		System.out.println();

		System.out.print("새 관리자 사번과 보직수당을 입력하시오: ");
		int managerNo  = scanner.nextInt();
		double commission = scanner.nextDouble();
			
		// replaceManagerOfDept 호출 (기존 관리자 사번 return)
		int oldMgrNo = replaceManagerOfDept(deptName, managerNo, commission);
		
		System.out.println("기존 관리자: ");		
		// printEmpInfo 호출		
		printEmpInfo(oldMgrNo);
		
		System.out.println("새 관리자: ");
		// printEmpInfo 호출		
		printEmpInfo(managerNo);
		
		scanner.close();
	}
}
