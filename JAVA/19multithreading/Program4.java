// if run() method is not Overriding in our class then Thread class run method will be executed and which has empty implementation hence we wont get any output of child Thread only we will get output of parent thread


class MyThread extends Thread
{
	
}

class Program4
{
	public static void main(String[] args)
	{
		MyThread t = new MyThread();
		t.start();
		System.out.println("Main method");
	}
}
