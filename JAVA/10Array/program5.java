// program for jagged array

class JaggedArray
{
	public static void main(String[] args)
	{
		int[][] arr = new int[][2] {{1},{2,3}};

		arr[0] = new int[0];
		arr[0] = new int[1];
		arr[0] = new int[2];
		arr[0] = new int[3];
		
		for(int i=0; i<2;i++)
		{
			for(int j=0;j<2;j++)
			{
				System.out.print(arr[i][j] + " ");
			}
			System.out.println();
		}
	}
	
}
