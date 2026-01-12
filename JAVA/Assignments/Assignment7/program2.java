import java.io.*;
class Program2
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter 5 numbers");
		int[] arr = new int[5];
		for(int i=0; i<=4;i++)
		{
			arr[i] = Integer.parseInt(br.readLine());
			//br.skip(1);
		}
		System.out.println("Entered array is");

		for(int j=0;j<=4;j++)
		{
			System.out.println(arr[j]);
		}
		System.out.println();
	}
}
