// this approach to define Thread is not recommended but we can define thread by using below


class MyThread extends Thread
{
	public void run()
	{
		System.out.println("Child Thread ");
	}
}
class Program9
{
	public static void main(String[] args)
	{
		MyThread t = new MyThread();
		Thread t1 = new Thread(t);
		t.start();
		System.out.println("Main Thread");
	}
}
