class Demo
{
	int x=10;
	static int y=20;

	public void fun()
	{
		System.out.println("in fun");
	}
	public static void run(){
		System.out.println("In run");
	}
	public static void main(String[] args)
	{
		Demo obj = new Demo();
		System.out.println(obj.x);
		System.out.println(y);
		obj.fun();
		run();
	}
}
