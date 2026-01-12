class InstanceDemo2
{
	{
		System.out.println("In Instance block");
	}
	InstanceDemo2()
	{
		System.out.println("In Constructor");
	}
	public static void main(String[] args)
	{
		InstanceDemo2 obj = new InstanceDemo2();
			System.out.println("In main method");
	}
	{
		System.out.println("In instance block2");
	}
}
