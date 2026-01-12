class MyThread extends Thread
{
	
	public void start()
	{
	super.start();
	System.out.println("in start");
	}
	public void run()
	{
		System.out.println("In run");
	}
}
class Test
{
	public static void main(String[] args)
	{
	MyThread t=new MyThread();
	t.start();
	System.out.println("In main method");
	t.start();
	}
}
