class ThisPtr2
{
	int x = 30;
	ThisPtr2()
	{
		int x = 20;
		System.out.println("In constructor");
		System.out.println(x);
		System.out.println(this.x);
	}
	ThisPtr2(int x)
	{
		System.out.println("In paramaterized constr");
		System.out.println(x);	
		System.out.println(this.x);

	}
	public static void main(String[] args)
	{
		ThisPtr2 obj1 = new ThisPtr2();
		ThisPtr2 obj2 = new ThisPtr2(10);
	}
}
