class ThisPtr4
{
	ThisPtr4()
	{
		this(10);
		System.out.println("In constr");
	} 
	ThisPtr4(int x)
	{
		System.out.println("In constr paramaterized");
	}
	public static void main(String[] args)
	{
		ThisPtr4 obj1 = new ThisPtr4();
	}
}
