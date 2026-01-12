class Hostel
{
	static void gym()
	{
		System.out.println("gym is common for all students");
	}
	void bed()
	{
		System.out.println("beds are seprate for anyone");
	}
	static void parking()
	{
		System.out.println("parking is common for all");
	}
	public static void main(String[] args)
	{
		gym();
		Hostel obj1 = new Hostel();
		obj1.bed();
		parking();
	}

}
