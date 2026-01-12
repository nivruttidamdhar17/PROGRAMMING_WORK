// program for take input and print product of natural numbers within the range

import java.io.*;
class InputAssign4
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter lower limit: ");
		int low = Integer.parseInt(br.readLine());

		System.out.println("Enter upper limit: ");
		int upp = Integer.parseInt(br.readLine());
		
		System.out.println("Product of entered natural numbers");
		int product=1;
		for(int i=low; i<= upp; i++)
		{
			product=product*i;
		}
		System.out.println(product);
	}
}
