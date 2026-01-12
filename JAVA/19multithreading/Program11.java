// we can get current executing thread object 


class MyThread extends Thread
{
	public void run()
	{
		System.out.println("run method executed by thread : "+Thread.currentThread().getName());
	}
}
class Program11
{
	public static void main(String[] args)
	{
		MyThread t = new MyThread();
		t.start();
		System.out.println("Main method executed by thread : "+ Thread.currentThread().getName());
	}
}
