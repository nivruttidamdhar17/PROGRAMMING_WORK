import java.io.*;
class Program7
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

		System.out.print("Sum of all elements in array: ");
		int sum = 0;
		for(int i=0;i<size;i++)
		{
			sum = sum + arr[i];
		}
		System.out.println(sum);
	}
}
