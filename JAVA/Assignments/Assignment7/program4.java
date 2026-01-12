import java.io.*;
class Program4
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter size of array: ");
		int size = Integer.parseInt(br.readLine());
		int[] arr = new int[size];
		System.out.println("Enter "+size+" elements in array");
		for(int i=0;i<size;i++)
		{
			arr[i] = Integer.parseInt(br.readLine());
		}

		System.out.println("Even numbers from entered array are :");
		for(int i=0;i<size;i++)
		{
			if(arr[i]%2==0)
			{
				System.out.println(arr[i]);
			}
		}
	}
}
