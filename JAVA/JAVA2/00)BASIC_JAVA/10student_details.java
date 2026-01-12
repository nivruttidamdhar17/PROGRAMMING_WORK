//create a class student (roll no, name, course, percentage). enter 2 students details and display them.

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
		System.out.println("Enter Student details");
		rno=sc.nextInt();
		sname=sc.nextLine();
		course=sc.next();
		per=sc.nextFloat();
	}
	void display()
	{System.out.println(rno+" "+sname+" "+course+" "+per);}
}
class Demo
{
	public static void main(String args[])
	{
		Student x=new Student();
		Student y=new Student();
		x.accept();
		y.accept();

		x.display();
		y.display();
	}
}