
public class Movie {
	String title;
	String director;
	
	public Movie(String title, String director) {
		this.title = title;
		this.director = director;
	}
			
	public String toString() {
		return "제목: " + title + " 감독: " + director;
	}
}
