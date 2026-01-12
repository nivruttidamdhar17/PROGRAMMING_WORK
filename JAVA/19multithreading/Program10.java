// Methods of setting and getting name of the Thread 


class MyThread extends Thread
{
	
}
class Program10
{
	public static void main(String[] args)
	{
		System.out.println(Thread.currentThread().getName());
		MyThread t = new MyThread();
		System.out.println(t.getName());
		Thread.currentThread().setName("It's My Thread");
		System.out.println(Thread.currentThread().getName());
	}
}
