class SundayPlan
{
	public static void main(String[] args)
	{
		System.out.println("1.Movie");
		System.out.println("2.Cricket");
		System.out.println("3.Friends");
		
		int choice=3;
		switch(choice)
		{
			case 1:
				System.out.println("to watch movie");
				break;
			case 2:
				System.out.println("to play cricket");
				break;
			case 3:
				System.out.println("to meet friends");
				break;
			default:
				System.out.println("play game");
				break;
		}
	}
}
