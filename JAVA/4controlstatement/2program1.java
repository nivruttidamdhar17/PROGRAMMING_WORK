class Program1
{
	public static void main(String[] args)
	{
		int v1=1;
		int v2=4;
		int v3=2;
		if(v1>v2 && v1>v3)
		{System.out.println(v1);}
		else if(v2>v3)
		{System.out.println(v2);}
		else if(v1==v2 && v1==v3)
		{System.out.println("all entries are same");}
		else if(v3==v3)
		{System.out.println(v3);}
		else
		{
			System.out.println("invalid entry");
		}
	}
}

