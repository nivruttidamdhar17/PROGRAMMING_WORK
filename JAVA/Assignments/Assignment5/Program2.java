import java.io.*;
class Program2
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter number of rows and columns ");
		int num1 = Integer.parseInt(br.readLine());
		int num2 = Integer.parseInt(br.readLine());
		 
		int x=1;
		for(int i=0 ; i<num1;i++)
		{
			for(int j=0;j<num2;j++)
			{
				if(j%2==0)
				{
					System.out.print(x*x+" ");
					x++;	
				}
				else if(j%2==1)
				{
					System.out.print(x+" ");
					x++;
				}
			}
			System.out.println();
		}
	}
}
