// if we are trying to restart the same thread then we will get runtime exception saying : IllegalThreadStateException


class MyThread extends Thread
{
	
}
class Program7
{
	public static void main(String[] args)
	{
		MyThread t = new MyThread();
		t.start();
		System.out.println("Main Method");
		t.start();
	}
}
