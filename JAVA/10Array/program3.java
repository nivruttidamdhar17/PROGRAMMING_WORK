// program for making diagonal elemtnts zero.

import java.io.*;
class ArrayDemo
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int[][] arr= new int [3][3];
		System.out.println("Enter elements in java");

		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				arr[i][j] = Integer.parseInt(br.readLine());
			}
		}

		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(i==j || i+j+1 == 3)
				{
					arr[i][j]=0;
				}
				/*else if(i+j+1==3)
				{
					arr[i][j]=0;
				}
				else
				{
					
				}*/
			}
		}
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}
	}
}
