class NestedFor12
{
	public static void main(String[] args)
	{
		int num1=2;
		int num2=3;
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				System.out.print(num1+" ");
				num1=num1+num2;
				num2+=2;
				
			}
			System.out.println();
		}
	}
}
