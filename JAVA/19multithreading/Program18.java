// Thread Priority   Default Priority 

class MyThread extends Thread
{
	public void run()
	{
			System.out.println("In child thread and Priority is : "+ Thread.currentThread().getPriority());  // default priority of child thread is inheriated from the parent thread.
	}
}
class Program18
{
	public static void main(String[] args)
	{
		System.out.println("Priority of main thread : "+ Thread.currentThread().getPriority());
		//Thread.currentThread().setPriority(17);
		Thread.currentThread().setPriority(7);
		System.out.println("Priority of main thread after setting it is : "+ Thread.currentThread().getPriority());
		MyThread t = new MyThread();
		t.start();
	}
}
