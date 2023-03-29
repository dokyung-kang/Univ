package jspbook.pr43;

import java.util.ArrayList;
import java.util.List;


public class AddManager {
	List<AddBean> addlist = new ArrayList<AddBean>();
	
	public void add(AddBean ab) {
		addlist.add(ab);
	}
	
	public List<AddBean> getAddList(){
		return addlist;
	}
	
	public AddBean getAddr(String username) {
		for(AddBean ab : addlist) {
			if(ab.getUsername().equals(username))
				return ab;
		}
		return null;
	}        
}
