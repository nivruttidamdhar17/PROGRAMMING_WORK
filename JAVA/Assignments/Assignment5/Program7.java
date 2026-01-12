import java.util.*;
class Program7
{
	public static void main(String[] args){
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter first number");
	int num1 = sc.nextInt();
	System.out.println("Enter second number:");
	int num2 = sc.nextInt();

	//System.out.print(num2);
	for(int i= num2;i>=num1;i--)
	{
		System.out.print(num2+" ");
		num2--;
		num2--;
		if(num2<=num1)
		{
			break;
		}
	}
	System.out.println();
	}
}
