class Demo
{
	int var1 =10;
	static int var2 = 20;
	void methodOne()
	{
		System.out.println("In Non-static method");
	}
	static void methodTwo()
	{
		System.out.println("In static method");
	}
	public static void main(String[] args)
	{
		System.out.println(var2);
		methodTwo();
		
		Demo obj1 = new Demo();

		System.out.println(obj1.var1);
		obj1.methodOne();
	}
}
