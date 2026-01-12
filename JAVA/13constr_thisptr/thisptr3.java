class ThisPtr3
{
	int x=10;
	ThisPtr3()
	{
		System.out.println("In constr");

		System.out.println(this);
	} 
	public static void main(String[] args)
	{
		ThisPtr3 obj1 = new ThisPtr3();
		System.out.println(obj1);
	}
}
