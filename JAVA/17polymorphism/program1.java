//PROGRAM FOR CONSTRUCTOR OVERLOADING

class program1
{
	program1()
	{
		System.out.println("No arg constructor");
	}

	program1(int i)
	{
		System.out.println("int arg constructor" );
	}
	program1(double d)
	{
		System.out.println("Double arg constructor");
	}

	public static void main(String[] args)
	{
		program1 p1= new program1(10);
		program1 p2= new program1(10.3);
		program1 p3= new program1();
	}
}
