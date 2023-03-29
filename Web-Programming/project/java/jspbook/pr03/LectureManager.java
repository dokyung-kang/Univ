package jspbook.pr03;

import java.util.ArrayList;
import java.util.List;

public class LectureManager {
	private static final int times = 6;
	private static final int days = 5;
	public int[][] typeMatrix = new int[times][days];
	public int[][] titleMatrix = new int[times][days];
	public int[][] spanMatrix = new int[times][days];
	
	List<LectureBean> lectlist = new ArrayList<LectureBean>();
	 
	public void add(LectureBean lBean) {
		lectlist.add(lBean);
	}
	
	public List<LectureBean> getLectList(){
		return lectlist;
	}
	
	public LectureBean getLect(int title) {
		for(LectureBean lBean : lectlist) {
			if(lBean.getTitle() == title)
				return lBean;
		}
		return null;
	}
	
	public void bulidMatrix() {
		
		for(int i = 0; i < times; i++)
			for(int j = 0; j < days; j++) {
				typeMatrix[i][j] = 0;
				titleMatrix[i][j] = -1;
				spanMatrix[i][j] = 1;
			}
		
		for(LectureBean b : lectlist) {
			if(b.getTime() != -1 && b.getDay() != -1) {
				if(b.getType() == 0) 
					typeMatrix[b.getTime() - 1][b.getDay()] = 1;
				if(b.getType() == 1)
					typeMatrix[b.getTime() - 1][b.getDay()] = 2;
				if(b.getType() == 2)
					typeMatrix[b.getTime() - 1][b.getDay()] = 3;
				if(b.getType() == 3)
					typeMatrix[b.getTime() - 1][b.getDay()] = 4;
					
				if(b.getTitle() == 0)
					titleMatrix[b.getTime() - 1][b.getDay()] = 0;
				if(b.getTitle() == 1)
					titleMatrix[b.getTime() - 1][b.getDay()] = 1;
				if(b.getTitle() == 2)
					titleMatrix[b.getTime() - 1][b.getDay()] = 2;
				if(b.getTitle() == 3)
					titleMatrix[b.getTime() - 1][b.getDay()] = 3;
				if(b.getTitle() == 4)
					titleMatrix[b.getTime() - 1][b.getDay()] = 4;
				if(b.getTitle() == 5)
					titleMatrix[b.getTime() - 1][b.getDay()] = 5;
				if(b.getTitle() == 6)
					titleMatrix[b.getTime() - 1][b.getDay()] = 6;
				if(b.getTitle() == 7)
					titleMatrix[b.getTime() - 1][b.getDay()] = 7;
				
				if(b.getConsecutive() == 1)
					spanMatrix[b.getTime() - 1][b.getDay()] = 1;
				if(b.getConsecutive() == 2)
					spanMatrix[b.getTime() - 1][b.getDay()] = 2;
				if(b.getConsecutive() == 3)
					spanMatrix[b.getTime() - 1][b.getDay()] = 3;
				if(b.getConsecutive() == 4)
					spanMatrix[b.getTime() - 1][b.getDay()] = 4;
				for(int i = 0; i < b.getConsecutive() - 1; i++)
					spanMatrix[b.getTime() + i][b.getDay()] = 0; 
			}
		}
		
		System.out.println("typeMatrix");
		printMatrix(typeMatrix);
		System.out.println("\ntitleMatrix");
		printMatrix(titleMatrix);
		System.out.println("\nspanMatrix");
		printMatrix(spanMatrix);
	}
	
	public static void printMatrix(int matrix[][]) {
		int i, j;
		
		for(i = 0; i < times; i++) {
			for(j = 0; j < days; j++) {
				System.out.printf("%3d", matrix[i][j]);
			}
			System.out.println();
		}
	}
}
