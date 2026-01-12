import java.io.*;
class Program3
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter size of array: ");
		int size = Integer.parseInt(br.readLine());
		System.out.println("Enter "+size+" numbers");
		int[] arr = new int[size];
		for(int i=0; i<size;i++)
		{
			arr[i] = Integer.parseInt(br.readLine());
		}
		System.out.println("Entered array is");

		for(int j=0;j<size;j++)
		{
			System.out.println(arr[j]);
		}
		System.out.println();
	}
}
