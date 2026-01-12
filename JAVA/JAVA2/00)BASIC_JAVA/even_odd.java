import java.util.*;
class EvenOdd
{
	public static void main(String args[])
	{
		float a;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number: ");
			a=sc.nextFloat();
		if(a%2==0)
		{
			System.out.println("Given number is even");
		}
		else
		{System.out.println("Given number is odd");}
	}
}