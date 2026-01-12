// program for taking input from user and reverse it

import java.io.*;
class InputAssign8
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter number you want to reverse: ");

		int num = Integer.parseInt(br.readLine());
		
		int rev =0;
		int x;  // remainder
		/*while(num > 0)
		{
			x = num%10;
			rev = rev*10+x;
			num = num/10;
		}*/


		//using for loop
		
		for(;num!= 0; num=num/10)
		{
			x = num % 10;
			rev = rev*10 + x;
		}
		System.out.println("The reverse of the given number is: "+ rev);
	}
}
