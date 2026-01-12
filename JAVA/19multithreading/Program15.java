// defining thread using Constructor 


class Program15 extends Thread
{
	public void run()
	{
		for(int i=0;i<10;i++)
		{
			System.out.println("In Run method / child thread");
	
		}
	}

	public static void main(String[] args)
	{
		Program15 obj = new Program15();
		System.out.println("main thread started");
		obj.start();
		System.out.println("End of main thread");
	}
}
