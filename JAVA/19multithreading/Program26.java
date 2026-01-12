// in this program interrupt call until child thread completes for loop execution i.e 10000 times


class MyThread extends Thread
{
	public void run()
	{
		for(int i=0;i<10000;i++)
		{
			System.out.println("I am Lazy Thead - "+i);
		}
		System.out.println("I am entering into sleeping state");
		try
		{
			Thread.sleep(10000);
		}
		catch(InterruptedException e)
		{
			System.out.println("I got Interrupted");
		}
	}
}
class Program26
{
	public static void main(String[] args) // throws InterruptedException
	{
		MyThread t = new MyThread();
		t.start();
		//Thread.sleep(5000);
		t.interrupt();
		System.out.println("End of main Thread");
	}
}
