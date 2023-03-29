package jspbook.pr35;

import java.util.ArrayList;
import java.util.List;

public class LectureManager {
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
}
