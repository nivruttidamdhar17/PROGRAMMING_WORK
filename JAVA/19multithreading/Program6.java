//if we call super class start() method i.e(Thread class start() method) in our overrided start() method the new thread will be created
// main thread is responsible for remaining code execution and new thread will be execued the run method


class MyThread extends Thread
{
	public void start()
	{
		super.start();
		System.out.println("Start method : "+ Thread.currentThread().getName());
	}
	public void run()
	{
		System.out.println("Run method : "+ Thread.currentThread().getName());
	}
}
class Program6
{
	public static void main(String[] args)
	{
		MyThread t = new MyThread();
		t.start();
		System.out.println("Main method : "+ Thread.currentThread().getName());
	}
}
