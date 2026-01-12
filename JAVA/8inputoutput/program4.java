//program for buffered input stream reader

import java.io.*;
class InputDemo4
{
	public static void main(String[] args) throws IOException
	{
		InputStreamReader isr= new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);
		int x= Integer.parseInt(br.readLine());
		System.out.println(x);
		
		
		/*BufferedReader br=new BufferedReader(isr);
		/*System.out.println("Enter name");
		String name= br.nextString();
		System.out.println("name="+name);*/
	}
}
