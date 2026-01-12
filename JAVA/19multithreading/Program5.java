// Overriding of start() method  
// Here new thread wont be created as we are overriding start() method of our class 
// from output we can see that new thread is not created
//It is not recomemded to override start() otherwise dont go for multithreading concept.


class MyThread extends Thread
{
	public void start()
	{
		System.out.println("Start method and thread name is : " +Thread.currentThread().getName());
	}
	public void run()
	{
		System.out.println("Run method and thread name is : "+ Thread.currentThread().getName());
	}
}
class Program5
{
	public static void main(String[] argss)
	{
		MyThread obj = new MyThread();
		obj.start();
		System.out.println("Main method and thread name is : "+ Thread.currentThread().getName());
	}
}
