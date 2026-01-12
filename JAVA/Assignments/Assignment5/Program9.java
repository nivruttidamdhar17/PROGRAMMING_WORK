import java.util.*;
class Program9
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number of rows: ");
		int num1 = sc.nextInt();
		int var= 1;	
		for(int i=1; i<=num1;i++)
		{
			for(int j = 1;j<=i;j++){
				
				System.out.print(var+" ");
				var++;
			}
			var--;
			
			System.out.println();
		}
	}
}
