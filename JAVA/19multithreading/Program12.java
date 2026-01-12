// controlling of main thread


class Program12
{
	public static void main(String[] args)
	{
	Thread t = Thread.currentThread();
	System.out.println("Current Thread : " + t);

	// Changing name of the thread
	t.setName("Its My Thread");
	System.out.println("New Name of the Thread after changing is : "+t);

	try
	{
		for(int i=5;i>0;i--)
		{
			System.out.println(i);
			Thread.sleep(1000);
		}
	}
	catch(InterruptedException e)
	{
		System.out.println("Main Thread interrupted");
	}
	}	
}
