//PROGRAM FOR CONSTRUCTOR OVERLOADING

class program2
{
	program2()
	{
		System.out.println("No arg constructor");
	}

	program2(int i)
	{
		this();
		System.out.println("int arg constructor" );
	}
	program2(double d)
	{
		this(10);
		System.out.println("Double arg constructor");
	}

	public static void main(String[] args)
	{
		program2 p1= new program2(10);
		program2 p2= new program2(10.3);
		program2 p3= new program2();
	}
}
