//enter n doctor details and display them display doctor by drno and drname.

import java.util.*;
class Doctor
{
	private int drno;
	private String drname;
	private float salary;

	void accept()
	{
		System.out.println("Enter Doctor details");
		Scanner sc=new Scanner(System.in);
		drno=sc.nextInt();
		drname=sc.next();
		salary=sc.nextFloat(); 	
	}
	void display()
	{
		System.out.println(drno+" "+drname+" "+salary);
	}
	void displayByDrno(int n)
	{
		if(drno==n);
		{display();}
	}
	void displayByDrname(String s)
	{
		if(drname.equal(s));
		{display();}
	}
}
class ObjectExample
{
	public static void main(args[])
	{
		int i,n;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter n");
		n=sc.nextInt();
		Doctor x[]=new Doctor[n];
		for(i=0;i<n;i++)
		{
			x[i]=new Doctor();
			x[i].accept();
		}	
		System.out.println("Display All doctor details");
		for(i=0;i<n;i++)
		{
			x[i].display();
		}
		System.out.println("Enter Doctor no want to see:");
		for(i=0;i<n;i++)
		{
			x[i].displayByDrno(no);
		}
		System.out.println("Enter doctor name want to see:");
		for(i=0;i<n;i++)
		{
			x[i].displayByDrname(s);	
		}
	}
}