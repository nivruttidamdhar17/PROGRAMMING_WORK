// Program for waiting of thread until given time :  join(time in milisecond);  method is used for it
// In this program main thread will wait until 15000 milisecond while completing the child thread, after 15000m ms main thread will interrupt the child thread in between


class MyThread extends Thread
{
	public void run()
	{
		for(int i=0;i<10;i++)
		{
			System.out.println("run method / child thread");
		
			try
			{
				Thread.sleep(2000);
			}
			catch(InterruptedException e)
			{}
		}
	}
}
class Program22 
{
	public static void main(String[] args) throws InterruptedException
	{
		MyThread t = new MyThread();
		System.out.println("Starting of main Thread");
		t.start();
		t.join(15000);
		for(int i=0;i<10;i++)
		{
			System.out.println("In main Thread");
		}
	}
}
