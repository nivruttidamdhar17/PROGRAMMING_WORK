//program for taking input using BufferedReader

import java.io.*;
class BufferedDemo
{
	public static void main(String[] args) throws IOException
	{
		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);
		
		System.out.println("Enter player info");
		
		System.out.println("Name:");
		String name = br.readLine();

		System.out.println("Jersey number:");
		int jer = Integer.parseInt(br.readLine());

		System.out.println("Enter Average");
		float avg = Float.parseFloat(br.readLine());

		System.out.println("Player name:"+ name);
		System.out.println("Jersey number:"+ jer);
		System.out.println("Average:"+ avg);

		//String str = br.readLine();
		//System.out.println(str);
	}
}
