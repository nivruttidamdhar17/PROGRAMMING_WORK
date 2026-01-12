// program for taking input and print sum of natural numbers in between range.

import java.io.*;
class InputAssign3
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter lower limit: ");
		int low =Integer.parseInt(br.readLine());

		System.out.println("Enter upper limit: ");
		int upp = Integer.parseInt(br.readLine());

		System.out.println("Output:");
		
		int sum=0;
		for(int i=low; i<=upp; i++)
		{
			sum=sum+i;
			
		}
		System.out.println(sum);
	}
}
