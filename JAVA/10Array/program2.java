// program for taking array size from user and sorting if even no is present write its position in array if odd is present write its ascii value.

import java.io.*;
class ArrayDemo2
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter size of array: ");
		int size = Integer.parseInt(br.readLine());

		int[] arr = new int[size];
		System.out.println("Enter elements of array: ");
		for(int i=0;i<size;i++)
		{
			arr[i] = Integer.parseInt(br.readLine());
			br.skip(1);
		}
		System.out.println("Output array is:");
		for(int i=0;i<size;i++)
		{
			if(arr[i]%2==0)
			{
				System.out.println(arr[i]);
			}
			else if(arr[i]%2==1)
			{
				while(arr[i]>0)
				{
					int d = arr[i] % 10;
					System.out.println(d + " (" +(d+48)+")");
				}
			}
			else
			{
				System.out.println();
			}
		}

	}
}
