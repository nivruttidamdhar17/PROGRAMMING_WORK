class Test2
{
	private static Test2 t=null;
	private Test2()
	{
	
	}
	public static Test2 gerTest2()
	{
		if(t==null)
		{
			t=new Test2();
		}
		return t;
	}
}
