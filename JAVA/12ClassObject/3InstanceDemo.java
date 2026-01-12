class InstanceDemo3
{
	int x = 10;
	{
		System.out.println("In Instance block");
	}
	public static void main(String[] args)
	{
		InstanceDemo3 obj = new InstanceDemo3();
		System.out.println(obj.x);
	}
	{
		x = 20;
		System.out.println("In instance block2");
	}
}
