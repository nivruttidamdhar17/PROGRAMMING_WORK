import java.io.*;
class Program8
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter size of array: ");
		int size = Integer.parseInt(br.readLine());
		System.out.println("Enter  elements of array: ");
		int[] arr = new int[size];

		for(int i=0;i<size;i++)
		{
			arr[i] = Integer.parseInt(br.readLine());
		}
		System.out.println("Frequency: ");

		for(int i=0;i<9;i++)
		{
			int x=0;
			int digit;
			for(int j=0;j<size;j++)
			{
				int y = arr[j];
				while(y>0)
				{
					digit = y%10;
					if(digit==arr[i])
					{
						x++;
					}
					y=y/10;
				}
				
			}
			if(x>0)
			{
				System.out.println("Frequency "+i+" is "+x);
			}
		}
	}
}
