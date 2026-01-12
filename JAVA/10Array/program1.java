// program for taking size of array from user and elements from user

import java.io.*;
import java.util.*;
class ArrayDemo1
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter size of array");
		int size = Integer.parseInt(br.readLine());
		
		char[] carr = new char[size];

		System.out.println("Enter elements of array:");

		for(int i=0;i<size;i++)
		{
			carr[i] = (char)br.read();
			br.skip(1);
		 
		}
		System.out.println("The array you entered is: ");
		for(int i=0;i<size;i++)
		{
			System.out.print(carr[i]+" ");
		}
		System.out.println();
	}
}
