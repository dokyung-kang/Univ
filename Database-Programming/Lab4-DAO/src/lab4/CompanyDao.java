package lab4;

import java.sql.*;
import java.util.ArrayList;
import java.util.List;
import java.sql.Date;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

import util.JDBCUtil;

public class CompanyDao {
	private JDBCUtil jdbcUtil = null;	// JDBCUtil 필드 선언
		
	public CompanyDao() {				// 생성자 
		jdbcUtil = new JDBCUtil();		// JDBCUtil 객체 생성
	}
	
    public Department findDeptByName(String deptName) {
    	/* 실습 #3의 printDeptInfo()를 변형. 
    	 * 부서정보 검색 후 Department DTO를 생성하고 검색 결과를 저장해서 return함 
    	 */
        StringBuilder query = new StringBuilder();

        query.append("SELECT deptno, manager, COUNT(empno) AS numOfEmps ");
        query.append("FROM EMP0750 JOIN DEPT0750 USING (deptno) ");
        query.append("WHERE dname = ? ");
        query.append("GROUP BY deptno, manager");
        
    	jdbcUtil.setSqlAndParameters(query.toString(), new Object[]{deptName});	// JDBCUtil에 질의문과 파라미터 설정	
		
		try {
			ResultSet rs = jdbcUtil.executeQuery();
			
			if (rs.next()) {		// 검색 결과 존재
				Department dept = new Department();
				
				 dept.setDeptNo(rs.getInt("deptno"));
				 dept.setDeptName(deptName);
				 dept.setMgrNo(rs.getInt("manager"));
				 dept.setNumOfEmps(rs.getInt("numOfEmps"));
				return dept;
			}
		} catch (Exception ex) {
			ex.printStackTrace();
		} finally {
			jdbcUtil.close();		// ResultSet, PreparedStatement, Connection 등 해제
		}
    	return null;
    } 

    public List<Employee> getAllEmpsInDept(int deptNo) {
    	/* 실습 #3의 printAllEmpsInDept()를 변형.
    	 * ArrayList<Employee> 타입 객체를 생성한 후, 검색된 각 사원 정보에 대해
    	 * Employee DTO를 생성 및 저장하고 List 객체에 추가함. List 객체를 반환함
    	 */
        StringBuilder query = new StringBuilder();
        query.append("SELECT empno, ename, job, hiredate, sal, comm, dname ");
        query.append("FROM EMP0750 JOIN DEPT0750 USING (deptno) ");
        query.append("WHERE deptno = ?");   
        
        jdbcUtil.setSqlAndParameters(query.toString(), new Object[] {deptNo});
        try {
            ResultSet rs = jdbcUtil.executeQuery();
            
            List<Employee> empList = new ArrayList<Employee>();
            
            
            while(rs.next()) {
                Date date = rs.getDate("hiredate");
                LocalDate hireDate = date.toLocalDate();
                Employee emp = new Employee(
                        rs.getInt("empno"),
                        rs.getString("ename"),
                        rs.getString("job"),
                        hireDate,
                        rs.getInt("sal"),
                        rs.getDouble("comm"),
                        rs.getString("dname")
                        );
                empList.add(emp);
    	
            }
            return empList;
        }catch (Exception ex) {
            ex.printStackTrace();
        } finally {
            jdbcUtil.close();      
        }
    	return null;
    }

    public Employee replaceManagerOfDept(Appointment appo) {
    	/* 실습 #3의 replaceManagerOfDept()와 유사하나, 매개변수 전달을 위해 Appointment
    	 * DTO를 이용하고, 실행 결과로 기존 관리자 사원 정보를 포함하는 Employee DTO를 반환함
    	 */  
        int oldMgrNo = 0;
        
        StringBuilder query1 = new StringBuilder();
        query1.append("SELECT manager FROM DEPT0750 WHERE deptno = ?");

        jdbcUtil.setSqlAndParameters(query1.toString(), new Object[] {appo.getDeptno()});
        try {
            ResultSet rs = jdbcUtil.executeQuery(); 

            if(rs.next()) {
                oldMgrNo = rs.getInt("manager");
            }
            
        } catch (Exception ex) {
            jdbcUtil.rollback();
            ex.printStackTrace();
        } finally {
            jdbcUtil.commit();
            jdbcUtil.close();
        }
        
        
        
        StringBuilder query2 = new StringBuilder();
        query2.append("UPDATE DEPT0750 SET manager = ? WHERE deptno = ?");

        jdbcUtil.setSqlAndParameters(query2.toString(), new Object[] {appo.getManager(), appo.getDeptno()});
        try {
            jdbcUtil.executeUpdate();  
        } catch (Exception ex) {
            jdbcUtil.rollback();
            ex.printStackTrace();
        } finally {
            jdbcUtil.commit();
            jdbcUtil.close();
        }
        
        StringBuilder query3 = new StringBuilder();
        query3.append("UPDATE EMP0750 ");
        query3.append("SET job = SUBSTR(job, 0, LENGTH(job)-3) ");
        query3.append("WHERE empno = ?"); 

        jdbcUtil.setSqlAndParameters(query3.toString(), new Object[] {oldMgrNo});
        try {
            jdbcUtil.executeUpdate(); 
        } catch (Exception ex) {
            jdbcUtil.rollback();
            ex.printStackTrace();
        } finally {
            jdbcUtil.commit();
            jdbcUtil.close();
        }
        
        StringBuilder query4 = new StringBuilder();
        query4.append("UPDATE EMP0750 ");
        query4.append("SET job = job || '(M)', comm = NVL(comm,0) + ? ");
        query4.append("WHERE empno = ?");              

        jdbcUtil.setSqlAndParameters(query4.toString(), new Object[] {appo.getComm(), appo.getManager()});
        try {
            jdbcUtil.executeUpdate(); 
        } catch (Exception ex) {
            jdbcUtil.rollback();
            ex.printStackTrace();
        } finally {
            jdbcUtil.commit();
            jdbcUtil.close();
        }
        
        StringBuilder query = new StringBuilder();
        query.append("SELECT empno, ename, job, hiredate, sal, comm, dname ");
        query.append("FROM EMP0750 JOIN DEPT0750 USING (deptno) ");
        query.append("WHERE empno = ?");   
        
        jdbcUtil.setSqlAndParameters(query.toString(), new Object[] {oldMgrNo});
        try {
            ResultSet rs = jdbcUtil.executeQuery(); 
            
        	Employee oldMgr = new Employee();
        	
        	if(rs.next()) {
                Date date = rs.getDate("hiredate");
                LocalDate hireDate = date.toLocalDate();
                oldMgr.setEmpno(rs.getInt("empno"));
                oldMgr.setEname(rs.getString("ename"));
                oldMgr.setJob(rs.getString("job"));
                oldMgr.setHiredate(hireDate);
                oldMgr.setSal(rs.getInt("sal"));
                oldMgr.setComm(rs.getDouble("comm"));
                oldMgr.setDeptName(rs.getString("dname"));
                return oldMgr;
        
            }
        } catch (Exception ex) {
        	jdbcUtil.rollback();
        	ex.printStackTrace();
        } finally {
            jdbcUtil.commit();
            jdbcUtil.close();
        }
    	return null;
    }
    
    public Employee findEmpInfo(int empNo) {
    	/* 실습 #3의 printEmpInfo()를 변형
    	 * 주어진 사번에 해당하는 사원 정보를 검색 후 Employee DTO를 생성 및 저장하고 반환함
    	 */ 
        StringBuilder query = new StringBuilder();
        query.append("SELECT ename, job, hiredate, sal, comm, deptno "); 
        query.append("FROM EMP0750 WHERE empno = ?");
        
        jdbcUtil.setSqlAndParameters(query.toString(), new Object[] {empNo});
        try {
            ResultSet rs = jdbcUtil.executeQuery(); 
            
            Employee oldMgr = new Employee();
            
    	
            if (rs.next()) {
                String empName = rs.getString("ename");
                String job = rs.getString("job");               
                double sal = rs.getDouble("sal");
                double comm = rs.getDouble("comm");
                int deptNo = rs.getInt("deptno");
                Date sqlDate = rs.getDate("hiredate");
                
                // hiredate 값을 String으로 변환
                LocalDate localDate = sqlDate.toLocalDate();   
                DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yyyy-MM-dd");
                String hireDate = localDate.format(formatter);
                // 결과 출력
                System.out.printf("%d %s %s %s %.2f %.2f %d\n", empNo, empName, job, hireDate, sal, comm, deptNo);
            }
        } catch (Exception ex) {
            jdbcUtil.rollback();
            ex.printStackTrace();
        } finally {
            jdbcUtil.commit();
            jdbcUtil.close();
        }

        
    	return null;        
    }
} 

