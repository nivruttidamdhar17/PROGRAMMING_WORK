// Program for waiting of thread until completing work of other thread join() method is used for it
// In this program main thread will wait until the complete execution of the child thread

class MyThread extends Thread
{
	public void run()
	{
		for(int i=0;i<10;i++)
		{
			System.out.println("Run method or child thread ");
			try
			{
				Thread.sleep(2000);
			}
			catch(InterruptedException e)
			{}
		}
	}
}
class Program21 
{
	public static void main(String[] args) throws InterruptedException
	{
		System.out.println("Main thread started");
		MyThread t = new MyThread();
		t.start();
		t.join();
		for(int i=0;i<10;i++)
		{
			System.out.println("Main thread / main method");
		}
	}
}
