class NestedFor10
{
	public static void main(String[] args)
	{
		int var1=1;
		char var2='A';
		for(int i=1;i<=4;i++)
		{
			for(int j=1;j<=i;j++)
			{
				if(i%2==1)
				{
					System.out.print(var1+" ");
					var1++;
				}
				else
				{
					System.out.print(var2+" ");
					var2++;
				}
			}
			System.out.println();
		}
	}
}
