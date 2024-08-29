package lab4;

public class Appointment {
    private int deptno;
    private int manager;
    private double comm;
    
    public Appointment() {}
    
    public Appointment(int deptno, int manager, double comm) {
        this.deptno = deptno;
        this.manager = manager;
        this.comm = comm;
    }

    public int getDeptno() {
        return deptno;
    }

    public void setDeptno(int deptno) {
        this.deptno = deptno;
    }

    public int getManager() {
        return manager;
    }

    public void setManager(int manager) {
        this.manager = manager;
    }

    public double getComm() {
        return comm;
    }

    public void setComm(double comm) {
        this.comm = comm;
    }

    @Override
    public String toString() {
        return "Appointment [deptno=" + deptno + ", manager=" + manager + ", comm=" + comm + "]";
    }
    
    
    
}
