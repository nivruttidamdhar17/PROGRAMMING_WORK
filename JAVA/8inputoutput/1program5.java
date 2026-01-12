// program for find frequency of digit taken form user
import java.io.*;
class InputAssign5
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter a number: ");
		int var = Integer.parseInt(br.readLine());
		System.out.println("frequency of digits");
		int x;		//count of digits
		int y;
		int digit;
		for(int i=0; i<=9;i++)
		{
			x=0;
			y=var;
			while(y>0)
			{
				digit=y%10;
				if(digit==i)
				{
					x++;
				}
				y=y/10;
			}
			if(x>0)
			{
				System.out.println("Frequency of "+i+":  "+x);
			}
		}
	}
}
