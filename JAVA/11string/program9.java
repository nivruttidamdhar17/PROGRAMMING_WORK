// program for searching string

import java.io.*;
class Program9
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter number of string:  ");
		int n = Integer.parseInt(br.readLine());
		
		String[] sarr = new String[n];
		System.out.println("Enter Strings: ");
		
		for(int i=0;i<sarr.length;i++)
		{
			sarr[i] = br.readLine();
		}
		
		System.out.println("Enter String to search: ");
		String search = br.readLine();

		boolean flag = false;

		for(int i=0;i<sarr.length;i++)
		{
			if(sarr[i].equalsIgnoreCase(search))
			{
				flag = true;
				System.out.println("Found at Index "+ i);
				break;
			}
		}
		if (flag == false)
		{
			System.out.println("String is not present in array: ");
		}
	}
}
