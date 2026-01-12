import java.util.*;
class Program2
{
	public static void main(String[] args)
	{
	System.out.println("Enter number: ");
	Scanner sc = new Scanner(System.in);
	
	int num1 = sc.nextInt();
	switch(num1)
	{
		case 1: 
			if(num1 == 1)
			{
				System.out.println("One");
			}
		break;
		case 2:
			if(num1 == 2)
			{
				System.out.println("Two");
			}
		break;
		case 3:
			if(num1 == 3)
			{
				System.out.println("Three");
			}
		break;
		case 4:
		if(num1 == 4)
		{
			System.out.println("Four");
		}
		break;
		case 5:
		if(num1 == 5)
		{
			System.out.println("Five");
		}
		break;
		default:
			System.out.println("Entered number is greater than 5");
		break;
	}
	}
}
