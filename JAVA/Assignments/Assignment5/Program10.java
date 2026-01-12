import java.util.*;
class Program10
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter starting point: ");
		int num1 =sc.nextInt();
		System.out.println("Enter ending point: ");
		int num2= sc.nextInt();
		
		System.out.println("Prime numbers: ");	
		int flag = 0 ;
		for(int i= num1; i<=num2;i++)
		{
			/*if(i==1 || i==0)
			continue;*/
			for(int j=2;j<=i/2;++j)
			{
				if(i%i==0)
				{
					flag = 0;
					break;
				}
				else
				{	
					flag =1;

				}
			}
			if(flag == 1)
			{
				System.out.println(i+" ");
			}
			

		}
	}
}
