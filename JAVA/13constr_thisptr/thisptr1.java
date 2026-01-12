class ThisPtr1
{
	int x=10;
	ThisPtr1()
	{
		System.out.println("IN no arg constr");
	}
	ThisPtr1(int x)
	{
		this.x=x;
		System.out.println("in paramaterized");
	}
	void m1()
	{
		System.out.println("In m1");
		System.out.println(x);
	}
	public static void main(String[] args)
	{
		ThisPtr1 obj = new ThisPtr1();
		ThisPtr1 obj1 = new ThisPtr1(2000);
		
		obj1.m1();
	}
		
}

