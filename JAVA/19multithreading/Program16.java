// defining thread by using runnable interface and using constructor


class Program16 implements Runnable
{
	public void run()
	{
		for(int i=0;i<10;i++)
		{
			System.out.println("In child thread/run method");
		}
	}
	public static void main(String[] args)
	{
		System.out.println("Start of main thread");
		Program16 obj = new Program16();
		Thread t = new Thread(obj);
		t.start();
		System.out.println("End of main Thread");

	}
}
