import java.io.*;
class Program5
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter size of array: ");
		int size = Integer.parseInt(br.readLine());
		System.out.println("Enter "+size+" elements");
		int[] arr = new int[size];
		for(int i=0;i<size;i++)
		{
			arr[i] = Integer.parseInt(br.readLine());
		}
		System.out.println("maximum from entered number is :");
		int max =0;
		for(int i=0;i<size;i++)
		{
			if(arr[i]>max)
				max = arr[i];
		}
		System.out.println(max);
	}
}
