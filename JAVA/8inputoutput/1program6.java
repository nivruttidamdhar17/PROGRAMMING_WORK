// check given number is palindrome or not

import java.io.*;
class InputAssign6
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.println("Enter number to find it is palindrome or not:");
		int no = Integer.parseInt(br.readLine());
		int d;
		int s=0;
		int t;
		
		t=no;
		while(no!=0)
		{
			d=no%10;
			no=no/10;
			s=s*10+d;
		}
		if(s==t)
		{
			System.out.println(t+" is palindrome number");
		}
		else
			System.out.println(t+" is not palindrome number");

	}
}
