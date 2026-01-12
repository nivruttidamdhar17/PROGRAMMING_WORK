import java.util.*;
class Program5
{
	public static void main(String[] args)
	{
		System.out.println("Enter number of rows: ");
		Scanner sc= new Scanner(System.in);
		int num1 = sc.nextInt();
		int var1=1;
		int i=1;
		while(i<=num1)
		{
			int j=1;
			while(j<=i)
			{
				System.out.print(i*j+" ");
				var1++;
				j++;
			}
			System.out.println();
			i++;
		}
	}
}
