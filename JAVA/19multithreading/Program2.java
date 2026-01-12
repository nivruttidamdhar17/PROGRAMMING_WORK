// program which shows if we t.run() instead of t.start() then new thread wont be created program will be executed just like a normal method call the output shows that both the methods are executed by main Thread//

class MyThread extends Thread
{
	public void run()
	{
		for(int i=0;i<10;i++)
		{
			System.out.println("this is run method and thread name is : "+ Thread.currentThread().getName());
		}
	}
}
class Program2
{
	public static void main(String[] args)
	{
		MyThread t = new MyThread();
		t.run();
		for(int i=0;i<10;i++)
		{
			System.out.println("This is main method and thread name is : "+ Thread.currentThread().getName());
		}
	}
}
