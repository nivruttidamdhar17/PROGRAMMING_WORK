import java.util.*;
class IPL2022
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);

		System.out.println("TATA IPL2022");
		char choice;

		do
		{
			System.out.println("1.MI");
			System.out.println("2.CSK");
			
			System.out.println("Enter player name: ");
			String pname = sc.nextLine();
			
			System.out.println("Enter Amount");
			int mi = sc.nextInt();
			int csk = sc.nextInt();

			int ch = 0;
			if(mi<csk)
			{
				ch = 1;
			}
			else if(mi>csk)
			{
				ch = 0;
			}
			
			switch(ch)
			{
				case 1:
					System.out.println(pname+" Sold to MI");
					break;
				case 2:
					System.out.println(pname+" Sold to CSK");
					break;
				default:
					System.out.println(pname+" Unsold in 2022 IPL auction");
					break;
			}

			System.out.println("Do you want to continue ?");
			choice = sc.next().charAt(0);
			sc.skip("\n");
		}
		while(choice == 'y' || choice == 'y');
	}
}
