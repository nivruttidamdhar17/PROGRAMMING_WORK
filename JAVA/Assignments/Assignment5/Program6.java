import java.util.*;
class Program6
{
	public static void main(String[] args)
	{
		System.out.println("Enter n limit:");
		Scanner sc = new Scanner(System.in);
		int num1 = sc.nextInt();

		for(int i=num1;i>=1;i--)
		{
			for(int j= 1;j<=10;j++)
			{
				System.out.print(i*j+" ");
			}
			System.out.println();
		}

	}
}
