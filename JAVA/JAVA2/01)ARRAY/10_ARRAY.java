//Enter n students details and display them
import java.util.*;
class Student
{
	private int rno;
	private String sname;
	private String course;
	private float per;

		void accept()
		{
			Scanner sc=new Scanner(System.in);
			System.out.println("Enter students details: ");
			rno=sc.nextInt();
			sname=sc.next();
			course=sc.next();
			per=sc.nextFloat();
		}
		void display()
		{
			System.out.println(rno+" "+sname+" "+course+" "+per);
		}
}

class Demo
{
	public static void main(String args[])
	{
		int n,i;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter n");
		n=sc.nextInt();
		Student x[]=new Student[n];
		for(i=0;i<n;i++)
		{
			x[i]=new Student();
			x[i].accept();
		}
		System.out.println("Display Student Details");
		for(i=0;i<n;i++)
		{
			x[i].display();
		}
	}
}