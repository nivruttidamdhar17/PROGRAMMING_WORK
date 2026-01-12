class Mall
{
	int cashCounter = 0;          //non-static
	static int parking = 1;    //static
	
	//static method
	static void cleaning()
	{
		System.out.println("Mall cleaning");
	}

	//non static method
	void prodDisplay()
	{
		System.out.println("Attractive display");
	}
	public static void main(String[] args)
	{
		System.out.println(parking);
		cleaning();

		Mall zara = new Mall();
		System.out.println(zara.cashCounter);
		zara.prodDisplay();

		Mall maxx = new Mall();
		System.out.println(maxx.cashCounter);
		maxx.prodDisplay();
	}
}
