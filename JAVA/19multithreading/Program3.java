// Overloading of run method, program shows that if we call thred class start() then it can invoke no argument run method for argument method we have to call implecitely to it and it will execute like an normal method call.

class MyThread extends Thread
{
	public void run()
	{
		for(int i=0;i<10;i++)
			System.out.println("No argument run method");
	}
	public void run(int i)
	{
		for(int j=0;j<10;j++)
			System.out.println("Int argument run method");
	}
}
class Program3
{
	public static void main(String[] args)
	{
		MyThread t = new MyThread();
		t.start();
		for(int i=0;i<10;i++)
			System.out.println("Main method");
	}
}
