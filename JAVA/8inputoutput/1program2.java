// program for taking input and print even numbers in between rangs

import java.io.*;
class InputAssign2
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter lower limit: ");
		int low =Integer.parseInt(br.readLine());

		System.out.println("Enter upper limit: ");
		int upp = Integer.parseInt(br.readLine());

		System.out.println("Output:");

		for(int i=low; i<=upp; i++)
		{
			if(i%2==0)
			{
				System.out.print(i+", ");
			}
		}
	}
}
