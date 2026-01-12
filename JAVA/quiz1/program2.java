class Core2Web2
{
	static int var=5;
	public static void main(String[] args)
	{
		System.out.println("Inside main");
		while(var > 3 && m1());
		System.out.println(var);
	}
	private static boolean m1()
	{
		var--;
		return true;
	}
}
