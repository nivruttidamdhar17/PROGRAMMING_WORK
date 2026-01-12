//Enter 'n' product details & display them. Display only those products where price > 3000. Display product details by product number & name.

import java.util.*;
class Product
{
	private int pno;
	private String pname;
	private float price;

	Scanner sc=new Scanner(System.in);	
		
	void accept()
	{
		
		System.out.println("Enter product details");
		pno=sc.nextInt();
		pname=sc.next();
		price=sc.nextFloat();
	}
	
	void display()
	{
		System.out.println(pno+" "+pname+" "+price);	
		
	}
	void displayByPrice()
	{
		if(price>3000)
		{
			display();	
		}
	}
	void displayByPno(int no)
	{
		if(pno==no)
		{display();}
	}
	void displayByName(String name)
	{
		if(pname.equals(name))
		{display();}
	}

}

class ObjectExample
{
	public static void main(String args[])
	{
		int n,i,no;
		String name;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter n");
		n=sc.nextInt();
		Product x[]=new Product[n];
		for(i=0;i<n;i++)
		{
			x[i]=new Product();
			x[i].accept();
		}
		System.out.println("Display Products details: ");
		for(i=0;i<n;i++)
		{
			x[i].display();
		}
		System.out.println("Display only those products were > 3000");
		{
			for(i=0;i<n;i++)
			{x[i].displayByPrice();}
		}
		System.out.println("Display product details by pno:");
		System.out.println("Enter product number you want to see: ");
		no=sc.nextInt();
		for(i=0;i<n;i++)
		{
			x[i].displayByPno(no);
		}
		System.out.println("Display Product details by name: ");
		System.out.println("Enter product name you want to see: ");
		name=sc.next();
		for(i=0;i<n;i++)
		{
			x[i].displayByName(name);
		}
		
	}
}
