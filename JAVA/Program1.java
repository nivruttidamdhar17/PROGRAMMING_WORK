class Test1
{
	static Test1 t= new Test1();
	private Test1()
	{
		
	}

	public static Test1 getTest1()
	{
		return t;
	}
}

class Demo extends Test1
{
	public static void mian(String[] args)
	{
	Test1 obj1= Test1.getTest1();
	System.out.println(System.identityHashCode(obj1));

	Test1 obj2= Test1.getTest1();
	System.out.println(System.identityHashCOde(obj2));

	Test2 obj3= Test1.getTest1();
	System.out.println(System.identityHashCode(obj3));
	}
}

