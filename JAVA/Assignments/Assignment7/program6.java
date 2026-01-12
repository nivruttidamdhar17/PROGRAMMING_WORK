import java.io.*;
class Program6
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter size of array");
		int size = Integer.parseInt(br.readLine());
		System.out.println("Enter elements in array: ");
		int[] arr = new int[size];
		for(int i = 0; i<size;i++)
		{
			arr[i] = Integer.parseInt(br.readLine());
		}

		System.out.println("minimum from entered numbers is :");
		int min=arr[0];
		for(int i=0;i<size;i++)
		{
			if(min>arr[i])
				min=arr[i];
		}
		System.out.println(min);

	}
}
