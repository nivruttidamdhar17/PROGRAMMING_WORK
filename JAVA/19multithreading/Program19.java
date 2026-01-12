class MyThread extends Thread
{
	public void run()
	{
		for(int i=0;i<10;i++)
		{
			System.out.println("Thid id child thread ");
		}
	}
}
class Program18
{
	public static void main(String[] args)
	{
		MyThread t = new MyThread();
		t.setPriority(10);
		t.start();
		for(int i=0;i<10;i++)
		{
			System.out.println("This is main thread");
		}
	}
}
