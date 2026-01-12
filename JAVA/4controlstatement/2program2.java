class Program2
{
	public static void main(String[] args)
	{
		int cost_price=500;
		int selling_price=300;
		if(selling_price>cost_price)
		{
			System.out.print("profit of ");
			System.out.println(selling_price-cost_price);
		}
		else if(cost_price>selling_price)
		{
			System.out.print("loss of ");
			System.out.println(cost_price-selling_price);
		}
		else
		{
			System.out.println("Invalid entry");
		}
	}
}

