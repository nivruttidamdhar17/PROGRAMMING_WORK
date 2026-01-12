// Starting a new thread by extending Thread class


class A extends Thread
{
	public void run()
	{
		for(int i=1;i<=5;i++)
		{
			System.out.println("in Class A Thread no : "+i);
		}
		System.out.println("exit from class A Thread ");
	}	
}
class B extends Thread
{
	public void run()
	{
		for(int i=1;i<=5;i++)
		{
		System.out.println("In class B Thread no : "+ i);
		}
		System.out.println("exit from class B Thread");
	}
}
class C extends Thread
{
	public void run()
	{
		for(int i=1;i<5;i++)
		{
			System.out.println("in class C Thread no : "+i);
		}
		System.out.println("Exit from class C Thread");
	}
}
class Program14
{
	public static void main(String[] args)
	{
		System.out.println("Main Theread started");
		A t1 = new A();
		B t2 = new B();
		C t3 = new C();
		t1.start();
		t2.start();
		t3.start();
		System.out.println("Exit from main thread");
	}
}
