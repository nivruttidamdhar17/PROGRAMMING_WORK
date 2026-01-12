import java.util.*;
class Program4
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("What's your intrest? \n1.Movies \n2.Series");
		
		System.out.println("Enter your choice: ");
		int ch1 = sc.nextInt();
		switch(ch1)
		{
			case 1:
			{
				System.out.println("Movies you wish to watch today: \n1.Founder \n2.Snowden \n3.Jobs \n4.Her \n5.Social Network\n6.Wall-E\n7.AI");
				System.out.println("Enter movie no: ");
				int movie = sc.nextInt();
				System.out.println("You Entered choice is: ");
				switch(movie)
				{
					case 1:
						System.out.println("1.Founder");
					break;
					case 2:
						System.out.println("2.Snowden");
					break;
					case 3:
						System.out.println("3.Jobs");
					break;
					case 4:
						System.out.println("4.Her");
					break;
					case 5:
						System.out.println("5.Social Network");
					break;
					case 6:
						System.out.println("6.Wall-E");
					break;
					case 7:
						System.out.println("7.AI");
					break;
					default:
						System.out.println("Invalid Entry");
					break;

				}
			}
			break;
			case 2:
			{
				System.out.println("Best series to watch: \n1.Silicon vally\n2.Devs\n3.The IT crowd\n4.Mr Robot");
				System.out.println("Enter your choice for series:");
				int series = sc.nextInt();
				System.out.println("Your Entered choice is:");
				switch(series)
				{
					case 1:
						System.out.println("1.Silicon vally");
					break;
					case 2:
						System.out.println("2.Devs");
					break;
					case 3:
						System.out.println("the IT crowd");
					break;
					case 4:
						System.out.println("Mr Robot");
					break;
					default:
						System.out.println("Invalid Entry");
					break;
				}
			}

		}	
	}
}
