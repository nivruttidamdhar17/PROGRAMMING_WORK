import java.util.*;
class Program3
{
	public static void main(String[] args)
	{
		System.out.println("Enter two numbers ");
		Scanner sc = new Scanner(System.in);
		int num1 = sc.nextInt();
		int num2 = sc.nextInt();
		int flag;
		if(num1 >0 && num2>0)
		{
			flag = 0;
		}
		else
		{
			flag = 1;
		}

		switch(flag)
		{
			case 0:
				{
					if((num1*num2)%2==0)
						System.out.println("multiplication of numbers is even");
					else
						System.out.println("Multiplication of numbers is odd");
					break;
				}
			case 1:
				{
					System.out.println("Sorry negative numbers not allowed");
					break;
				}
		}
	}
}
