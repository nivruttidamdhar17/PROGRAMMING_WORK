import java.util.*;

class DoWhileDemo1
{
	public static void main(String[] args)
	{
	Scanner sc= new Scanner(System.in);
	System.out.println("Enter number of elements");
	int ele = sc.nextInt();

	do
	{
		int x = sc.nextInt();
		if(x%3==0)
			System.out.println(x+" ");
		ele--;
		
	}
	while(ele > 0);
	}
}
