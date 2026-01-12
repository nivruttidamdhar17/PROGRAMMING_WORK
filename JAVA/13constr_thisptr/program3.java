class Demo3
{
	private Demo3()
	{
		System.out.println("In constructor");
	}
	private static void m1()
	{
		Demo3 obj = new Demo3();	
	}
	public static void main(String[] args)
	{
		Demo3 obj = new Demo3();
		obj.m1();
	
	}
}
