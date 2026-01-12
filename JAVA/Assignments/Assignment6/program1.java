import java.util.*;
class Program1
{
	public static void main(String[] args)
	{
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter marks of all five subjects: ");
	
	int sub1 = sc.nextInt();
	int sub2 = sc.nextInt();
	int sub3 = sc.nextInt();
	int sub4 = sc.nextInt();
	int sub5 = sc.nextInt();
	
	if(sub1>35 && sub2>35 && sub3>35 && sub4>35 && sub5>35)
	{
		int sum = sub1+sub2+sub3+sub4+sub5;	
		System.out.println("Marks "+sum);
	}
	/*else if((sub3 && sub4)>35)
	{
		
	}*/
	
	}
}
