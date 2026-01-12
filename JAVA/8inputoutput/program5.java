//program for Input using InputStreamReader 

import java.io.*;
class IODemo
{
	public static void main(String[] args) throws IOException
	{
		InputStreamReader isr = new InputStreamReader(System.in);
		int x = isr.read();
		System.out.println(x);
		
		isr.close();
		int y = isr.read();
		System.out.println(y);
	}
}
