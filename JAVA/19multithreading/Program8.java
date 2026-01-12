// Defining thread by Implementing Runnable Interface Interface


class MyRunnable implements Runnable
{
	public void run()
	{
		for(int i=0;i<10;i++)
		{
			System.out.println("Child Thread");
		}
	}
}
class Program8
{
	public static void main(String[] args)
	{
		MyRunnable r = new MyRunnable();
		Thread t = new Thread(r);                    // Target Runnable
		t.start();
		for(int i=0;i<10;i++)
		{
			System.out.println("Main Method");
		}
	}
}
