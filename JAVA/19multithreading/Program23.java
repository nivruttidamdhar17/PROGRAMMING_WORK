// Program for chilld thread waiting until completion of main thread


class MyThread extends Thread
{
	static Thread mt;
	public void run()
	{
			try
			{
				mt.join();
			}
			catch(InterruptedException e)
			{}
			for(int i=0;i<10;i++)
			{
				System.out.println("Child Thread / run method");				
			}
			
	}

}
class Program23
{
	public static void main(String[] args) throws InterruptedException
	{
		MyThread.mt = Thread.currentThread();
		MyThread t = new MyThread();
		t.start();
		for(int i=0;i<10;i++)
		{
			System.out.println("Main thread / main method");
			Thread.sleep(2000);
		}
	}
}
