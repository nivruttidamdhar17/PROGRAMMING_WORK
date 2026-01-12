class NestedFor2
{
	public static void main(String[] args)
	{
		int p=1;
		for(int i=1;i<=3;i++)
		{
			for(int j=1;j<=3;j++)
			{
				System.out.print(p+ " ");
				p++;
			}
			System.out.println();
		}
	}
}
