// program for taking input from user and find natrual numbers
import java.io.*;
class InputAssign1
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter Lower limit of natural numbers: ");
		int low = Integer.parseInt(br.readLine());
		
		System.out.println("Enter Upper limit of natural numbers: ");
		int upp = Integer.parseInt(br.readLine());

		for(int i=low; i<=upp; i++ )
		{
			System.out.print(i+", ");
		}
	}
}
