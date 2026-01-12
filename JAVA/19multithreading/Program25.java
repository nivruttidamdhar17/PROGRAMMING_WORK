// how thread can interrupt another thread
// in this program the child thread will sleep for 10sec and the main thread which is sleeped for 5 sec will intrrupt child thread after 5 second
// for better experiencing output remove commented statments present inside code

class MyThread extends Thread
{
	public void run()
	{
		try
		{
			for(int i=0;i<10;i++)
			{
				System.out.println("I am lazy Thread");
				Thread.sleep(10000);
			}
		}
		catch(InterruptedException e)
		{
			System.out.println("I got Interrupted");
		}
	}
}
class Program25
{
	public static void main(String[] args) //throws InterruptedException
	{
		MyThread t = new MyThread();
		t.start();
		//Thread.sleep(5000);
		t.interrupt();
		System.out.println("End of main Thread");
	}
}
