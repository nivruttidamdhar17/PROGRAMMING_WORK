// Implementing runnable interface in java to define Thread


class MyRunnable implements Runnable
{
	public void run()
	{
		for(int i=0;i<5;i++)
		{
			System.out.println("The Thread MyRunnable is : "+ i);
		}
		System.out.println("End of the Thread MyRunnable");
	}
}
class Program13
{
	public static void main(String[] args)
	{
		MyRunnable r = new MyRunnable();
		Thread obj = new Thread(r);
		obj.start();
		System.out.println("End of the main thread");
	}
}
