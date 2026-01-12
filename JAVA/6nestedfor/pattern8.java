class NestedFor8
{
	public static void main(String[] args)
	{
		int var=1;
		for(int i=1;i<=3;i++)
		{
			for(int j=1;j<=3;j++)
			{
				if(i%2==1)
				{
					if(j%2==1)
					{System.out.print(var+" ");
					var++;
					}
					else
					{
						System.out.print(var*var+" ");
						var++;
					}
				}
				else
				{
					if(j%2==0)
					{
						System.out.print(var+" ");
						var++;
					}
					if(j%2==1)
					{
						System.out.print(var*var+" ");
						var++;
					}
				}
				
			}
			System.out.println();
		}
	}
}
