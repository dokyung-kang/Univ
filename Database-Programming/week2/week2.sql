set echo on

-- Q1.
create table emp0750 as
select empno, ename, dname, sal, comm, mgr, hiredate
from emp e join dept d on e.deptno = d.deptno
where dname = 'RESEARCH';
select * from emp0750;


-- Q2.
insert into emp0750 (empno, ename, dname, sal, hiredate)
values (7999, 'JUILE', 'RESEARCH', 1000, SYSDATE);
select * from emp0750;


-- Q3.
insert into emp0750(empno, ename, dname, sal, comm, mgr, hiredate)
select empno, ename, dname, sal, 
case 
when comm is null then sal * 0.05
else comm
end as comm,
mgr, hiredate
from emp e join dept d on e.deptno = d.deptno
where d.deptno = 30;
select * from emp0750;


-- Q4.
update emp0750
set mgr = (select mgr from emp0750 where ename = 'FORD')
where ename = 'JUILE';
select * from emp0750;


-- Q5.
alter table emp0750 
add work_anniv VARCHAR2(10);
update emp0750
set work_anniv = TO_CHAR(ADD_MONTHS(hiredate, 240), 'YYYY-MM-DD');
select * from emp0750;


-- KING 사원 값 추가함
insert into emp0750 (empno, ename, dname, sal, comm, mgr, hiredate)
select empno, ename, dname, sal, comm, mgr, hiredate
from emp e join dept d on e.deptno = d.deptno
where ename='KING';
update emp0750
set mgr=7698
where ename='KING';
select * from emp0750;


-- Q6.
alter table emp0750
add constraint emp0750_empno_pk primary key (empno);
alter table emp0750
add constraint emp0750_mgr_fk foreign key (mgr) references emp0750 (empno);


-- Q7.
create sequence empno_seq0750
increment by 10
start with 8000
maxvalue 9000;

insert into emp0750 (empno, ename, sal, hiredate)
values (empno_seq0750.nextval, 'AAA111', 4000, SYSDATE);

insert into emp0750 (empno, ename, sal, hiredate)
values (empno_seq0750.nextval, 'BBB222', 4000, SYSDATE);

insert into emp0750 (empno, ename, sal, hiredate)
values (empno_seq0750.nextval, 'CCC111', 4000, SYSDATE);

select * from emp0750;


-- Q8.
select ROWNUM, empno, ename, round(mod(mod(MONTHS_BETWEEN(SYSDATE, hiredate) / 12, 1) * 12, 1) * (365/12), 0) as contday
from (select empno, ename, hiredate
        from emp0750
        order by hiredate desc)
where ROWNUM <= 4;