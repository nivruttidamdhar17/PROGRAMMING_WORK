// Yeild method used for pausing current executing Thread to give chance to waiting thread of same priority


class MyThread extends Thread
{
	public void run()
	{
		for(int i=0; i<10 ;i++)
		{
			System.out.println("Child Thread ");
			Thread.yield(); // because this method main thread will get full chance to execute
		}
	}
}
class Program20
{
	public static void main(String[] args)
	{
		System.out.println("Main Thread Started");
		MyThread t = new MyThread();
		t.start();
		for(int i=0;i<10;i++)
		{
			System.out.println("In main Thread");
		}
		System.out.println("Main thread End");

	}
}
