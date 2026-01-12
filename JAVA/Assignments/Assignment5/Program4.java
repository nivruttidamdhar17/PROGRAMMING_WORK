import java.util.*;
class Program4
{
	public static void main(String[] args)
	{
		System.out.println("Enter number of rows: ");
		Scanner sc = new Scanner(System.in);
		
		int num1 = sc.nextInt();

		int i=1;
		while(i<=num1)
		{
			int j=1;
			while(j<=i)
			{
				if(j%2==1)
				{
					System.out.print("1"+" ");
				}
				else
				{
					System.out.print("0"+" ");
				}
				j++;
			}
			System.out.println();
			i++;
		}
	}
}
