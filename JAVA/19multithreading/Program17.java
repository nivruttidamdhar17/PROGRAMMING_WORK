// start thread using object and constructor


class Program17 extends Thread
{
	public void run()
	{
		System.out.println("In run method");
	}

	public static void main(String[] args)
	{
		Program17 obj = new Program17();
		obj.start();
		System.out.println("thread name for obj.start() : "+ obj.getName());

		Thread t1 =new Thread();
		t1.start();
		System.out.println("Thread name for t1.start() : "+t1.getName());

		Thread t2 = new Thread();
		t2.start();
		System.out.println("thread name for t2.start() : "+t2.getName());
	}
}
