package lab4;

import java.util.Iterator;
import java.util.List;
import java.util.Scanner;

public class Lab4 {
   
	private static CompanyDao compDao = new CompanyDao();
    
	public static void main(String[] args) {		
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("부서명을 입력하시오: ");
		String deptName = scanner.next();
        System.out.println();
		
	     Department dept = compDao.findDeptByName(deptName);  	    
		// dept 객체의 필드 값 출력 ...
         System.out.println("<부서정보>");
         System.out.println("부서번호: " + dept.getDeptNo());
         System.out.println("부서명: " + deptName);
         System.out.println("관리자사번: " + dept.getMgrNo());
         System.out.println("사원 수: " + dept.getNumOfEmps());
         System.out.println();
		
	     List<Employee> empList = compDao.getAllEmpsInDept(dept.getDeptNo());  	    
		// empList에 포함된 모든 emp 객체들의 필드 값을 출력 
	    // emp 객체들을 하나씩 접근하기 위해 empList로부터 Iterator<Employee>를 구해서 활용
	     Iterator<Employee> iter = empList.iterator();
	     while(iter.hasNext()) {
	         Employee emp = iter.next();
	         System.out.println(emp);  // toString 호출됨
	     }
         System.out.println();
	     
		System.out.print("새 관리자 사번과 관리자 보직수당을 입력하시오: ");
		int managerNo  = scanner.nextInt();
		double commission = scanner.nextDouble();
        System.out.println();   

		Appointment appo = new Appointment(dept.getDeptNo(), managerNo, commission);
	    Employee oldMgr = compDao.replaceManagerOfDept(appo);	 
		      
		// oldMgr의 필드 값 출력
        System.out.println("기존 관리자:");  
        System.out.println("사번: " + oldMgr.getEmpno());
        System.out.println("이름: " + oldMgr.getEname());
        System.out.println("직무: " + oldMgr.getJob());
        System.out.println("입사일: " + oldMgr.getHiredate());
        System.out.println("월급: " + oldMgr.getSal());
        System.out.println("수당: " + oldMgr.getComm());
        System.out.println("소속부서명: " + oldMgr.getDeptName());
        System.out.println();   
	     
        System.out.println("새 관리자:");         
	    // newMgr의 필드 값 출력  
        Employee newMgr = compDao.findEmpInfo(managerNo);

		scanner.close();
	}
}