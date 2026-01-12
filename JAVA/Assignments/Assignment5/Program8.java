import java.util.*;
class Program8
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter lower limit: ");
		int num1 = sc.nextInt();
		System.out.println("Enter upper limit: ");
		int num2 = sc.nextInt();
		
		for(int i=num1;i<=num2;i++)
		{
			if(num1%5==0 && num1%2==0)
			{
				System.out.print(num1+", ");
			}
			num1++;
		}
	}
}
