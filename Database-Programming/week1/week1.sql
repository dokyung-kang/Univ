set echo on

-- Q1.
SELECT ename, deptno, job
FROM emp
WHERE (deptno=30 OR deptno=20) AND ename LIKE '%AR%';


-- Q2.
-- (a)
SELECT COUNT(empno)
FROM emp e JOIN dept d ON e.deptno = d.deptno
WHERE dname = 'RESEARCH' AND sal <= 2000;

-- (b)
SELECT COUNT(empno)
FROM emp e
WHERE sal <= 2000
AND deptno IN (SELECT deptno FROM dept WHERE dname = 'RESEARCH');


-- Q3.
SELECT ename, sal, NVL(comm, 0) "수당", sal*12+NVL(comm, 0) "연봉"
FROM emp e, salgrade s
WHERE e.sal BETWEEN s.losal AND s.hisal
AND s.grade=5 AND NVL(e.comm, 0) <500;


-- Q4.
SELECT ename,
TO_CHAR(hiredate, 'YYYY"년" MM"월" DD"일"') AS "입사일",
TRUNC(MONTHS_BETWEEN(SYSDATE, hiredate)/12, 0) AS "재직년수",
TO_CHAR(ADD_MONTHS(hiredate, 12*30), 'YYYY"년" MM"월" DD"일"') AS "퇴사예정일"
FROM emp e
ORDER BY hiredate;


-- Q5.
SELECT deptno, job, COUNT(empno) AS "사원수", AVG(sal) AS "평균급여"
FROM emp
GROUP BY deptno, job
ORDER BY deptno, job;


-- Q6.
-- (a)
SELECT dname, AVG(sal) "평균급여"
FROM emp JOIN dept ON emp.deptno = dept.deptno
GROUP BY dname
HAVING COUNT(empno) >= 2;

-- (b)
SELECT dname, avg_sal
FROM (SELECT dname, COUNT(empno) num_emp, AVG(sal) avg_sal 
           FROM emp JOIN dept ON emp.deptno = dept.deptno
           GROUP BY dname)
WHERE num_emp >= 2;


-- Q7.
SELECT dname, mgr, COUNT(empno) AS "사원수"
FROM dept d LEFT OUTER JOIN emp e ON d.deptno=e.deptno
GROUP BY dname, mgr;


-- Q8 - 1.
SELECT e.ename, f.ename AS "동료사원"
FROM emp e JOIN emp f ON e.deptno = f.deptno
WHERE e.empno <> f.empno
ORDER BY e.ename, f.ename;


-- Q8-2.
SELECT e.ename, LISTAGG(f.ename, ',') WITHIN GROUP (ORDER BY f.ename) AS "동료사원들"
FROM emp e JOIN emp f ON e.deptno = f.deptno
WHERE e.empno <> f.empno
GROUP BY e.ename
ORDER BY e.ename;


-- Q9.
SELECT ename, sal,
(CASE WHEN sal<1000 THEN sal*0.01
WHEN sal<2000 THEN sal*0.015
ELSE sal*0.02 END) AS "공제액"
FROM emp
ORDER BY sal DESC;