// program for string constructor

class Demo
{
	Demo()
	{
		System.out.println("In no-arg demo constructor");
	}

	Demo(int x)
	{
		System.out.println("In int-arg demo constructor");
	}
	
	public static void main(String[] args)
	{
		Demo obj1 = new Demo();
		Demo obj2 = new Demo(10);
		//Demo obj3 = new Demo(10.5);    // error: incompatible type: possible loosey conversion double cannot be converted into int.
	}
}
