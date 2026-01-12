class MyThread extends Thread
{
	public void run()
	{
		for(int i=0;i<10;i++)
		{
			System.out.println("This is run method / child Thread");
		}
	}
}
class Program1
{
	public static void main(String[] args)
	{
		MyThread t = new MyThread();
		t.start();
		for(int i=0;i<10;i++)
		{
			System.out.println("this is main method / parent thread");
		}
	}
}
