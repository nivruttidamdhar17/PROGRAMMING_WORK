class ThisPtr6
{
	int x=10;
	ThisPtr6()
	{
		this(x);
		System.out.println("in thisptr()");
	}
	ThisPtr6(int y)
	{
		//this();
		System.out.println("In paramaterized");
	}
	public static void main(String[] args)
	{
		ThisPtr6 obj = new ThisPtr6();
	}
}
