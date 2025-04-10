package jspbook.pr38;

public class LoginBean {

	private String id;
	private String pw;
	private String email;
	private Integer gender;
	private String birth; 
	
	public String getId() {
		return id;
	}
	public void setId(String id) {
		this.id = id;
	}
	public String getPw() {
		return pw;
	}
	public void setPw(String pw) {
		this.pw = pw;
	}
	public String getEmail() {
		return email;
	}
	public void setEmail(String email) {
		this.email = email;
	}
	public Integer getGender() {
		return gender;
	}
	public void setGender(Integer gender) {
		this.gender = gender;
	}
	public String getBirth() {
		return birth;
	}
	public void setBirth(String birth) {
		this.birth = birth;
	}

	public boolean isGrownUp() {
		String[] dArray = birth.split("-");
		if(2022 - Integer.parseInt(dArray[0]) >= 19)
			return true;
		else
			return false;
	}
}
