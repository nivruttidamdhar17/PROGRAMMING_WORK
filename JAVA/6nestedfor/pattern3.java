class NestedFor3
{
	public static void main(String[] args)
	{
		char var1='A';
		char var2='a';
		for(int i=1;i<=3;i++)
		{
			for(int j=1;j<=3;j++)
			{
				if(i%2==1)
				{
					if(j%2==1)
					{
						System.out.print(var1+" ");
						var1++;
						var1++;
					}
					else
					{
						var2++;
						System.out.print(var2+" ");
					}
				}
				else
				{
					if(j%2==1)
					{
						var2++;
						var2++;
						System.out.print(var2+" ");
					}
					else
					{
						System.out.print(var1+" ");
						var1++;
						var1++;
					}
				}
				
			}
			System.out.println();
		}
	}
}
