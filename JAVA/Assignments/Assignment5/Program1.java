import java.io.*;
class Program1
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter a number: ");
		int num1 = Integer.parseInt(br.readLine());

		System.out.println("Enter limits: ");
		int num2 = Integer.parseInt(br.readLine());
		for(int i=1 ; i<num2 ; i++)
		{
			int x=num1*i;
			if(x<=num2)
			{
				System.out.println(x);
			}	
		}
	}
}
