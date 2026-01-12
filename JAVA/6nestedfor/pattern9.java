class NestedFor9
{
	public static void main(String[] args)
	{	
		for(int i=1;i<=4;i++)
		{
			int var=5;
			for(int j=4;j>=i;j--)
			{
				System.out.print(var-i+" ");
				var--;	
			}
			System.out.println();
		}
	}
}
