import java.io.*;
class Program5
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("let's see Bikes Price \n1.Honda \n2.Suzuki\n3.KTM");
		System.out.println("Enter choice of bike");
		int ch1 =Integer.parseInt(br.readLine());
		switch(ch1)
		{
			case 1:
				System.out.println("Bike models for your selected choice are: \nA.Activa 6G \nB.SP 125 \nC.Shine \nD.Unicorn \nE.Hornet 2.0 \nF.XBlade \nG.Livo");
				System.out.println("Enter your choice");
				char ch2 = (char)br.read();
				System.out.print("Price of ");
				switch(ch2)
				{
					case 'A':
					{
						System.out.println("Activa 6G : 72,400-75,400");
					}
					break;
					case 'B':
					{
						System.out.println("SP 125 : 82,400-86-400");
					}
					break;
					case 'C':
					{
						System.out.println("Shine : 77,300-81,300");
					}
					break;
					case 'D':
					{
						System.out.println("Unicorn : 1.04 lakh*");
					}
					break;
					case 'E':
					{
						System.out.println("Hornet 2.0 : 1.35 lakh*");
					}
					break;
					case 'F':
					{
						System.out.println("XBlade : 1.16-1.20 lakh*");
					}
					break;
					case 'G':
					{
						System.out.println("Livo : 75,000-79,000");
					}
					break;
					default:
					System.out.println("Enter valid choice");
					break;
				}
			break;
			case 2:
				System.out.println("Bike models for your selected choice are: \nA.Gixxer SF\nB.Gixxer \nC.V-Strom SX \nD.Katana \nE.V-Strom 650XT \nF.Hayabusa");
				System.out.println("Enter your choice");
				char ch3 = (char)br.read();
				System.out.print("Price of ");
				switch(ch3)
				{
					case 'A':
					{
						System.out.println("Gixxer SF : 1.37 Lakh*");
					}
					break;
					case 'B':
					{
						System.out.println("Gixxer : 1.35 Lakh*");
					}
					break;
					case 'C':
					{
						System.out.println("V-Strom SX : 2.12 Lakh*");
					}
					break;
					case 'D':
					{
						System.out.println("Katana : 13.61 Lakh*");
					}
					break;
					case 'E':
					{
						System.out.println("V-Strom 650XT : 8.85 Lakh*");
					}
					break;
					case 'F':
					{
						System.out.println("Hayabusa : 16.41 Lakh*");
					}
					break;
					default:
					System.out.println("Enter valid choice");
					break;
				}
			break;
			case 3:
				System.out.println("Bike models for your selected choice are: \nA.KTM 200 Duke\nB.KTM 390 Duke \nC.KTM 125 Duke \nD.2022 KTM RC 390 \nE.KTM 250 Duke \nF.HKTM RC 125");
				System.out.println("Enter your choice");
				char ch4 = (char)br.read();
				System.out.print("Price of ");
				switch(ch4)
				{
					case 'A':
					{
						System.out.println("KTM 200 Duke : 1.90 Lakh*");
					}
					break;
					case 'B':
					{
						System.out.println("KTM 390 Duke : 2.94 Lakh*");
					}
					break;
					case 'C':
					{
						System.out.println("KTM 125 Duke : 1.76 Lakh*");
					}
					break;
					case 'D':
					{
						System.out.println("2022 KTM RC 390 : 3.14 Lakh*");
					}
					break;
					case 'E':
					{
						System.out.println("KTM 250 Duke : 2.35 Lakh*");
					}
					break;
					case 'F':
					{
						System.out.println("KTM RC 125 : 1.87 Lakh*");
					}
					break;
					default:
					System.out.println("Enter valid choice");
					break;
				}
			break;
			default:
				System.out.println("Enter valid choice");
				break;
		}
	}
}
