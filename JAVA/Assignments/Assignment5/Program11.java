import java.util.*;
class Program11
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter starting point: ");
		int num1 =sc.nextInt();
		System.out.println("Enter ending point: ");
		int num2= sc.nextInt();
		
		System.out.println("Prime numbers: ");	
		while(num1<num2)
		{
			boolean flag = false;
			for(int i=2;i <= num1/2;++i)
			{
				if(num1%i==0)
				{
					flag = true;
					break;
				}
				else
				{
					flag=false;
				}
			}
			if(!flag && num1 != 0 && num1 !=1)
			{
				System.out.print(num1+" ");
			}
			++num1;
		}	


	}
}
