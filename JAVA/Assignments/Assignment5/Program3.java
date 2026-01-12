import java.util.*;
class Program3
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number of rows");
		int num1 = sc.nextInt();
		

		for(int i=0 ;i<num1; i++)
		{
			int x = 'A'+(num1-1);
			for(int j= 0 ;j<num1;j++)
			{
				
				System.out.print((char)x+" ");
				x--;	
			}
			System.out.println();
		}

	}
}
