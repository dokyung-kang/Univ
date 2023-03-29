import java.io.*;
import java.util.*;
public class A13_1 {

	public static void main(String[] args) {
		try{
			InputStream in = new FileInputStream("c:/Temp/in.txt");
			OutputStream out = new FileOutputStream("c:/Temp/out.txt");
			int c;
			while((c = in.read()) != -1) {
				if(97 <= c && c <= 122)
					c = c - 32;
				out.write(c);
			}
		} catch(IOException e) {
			e.printStackTrace();
		}
		
	}
}
