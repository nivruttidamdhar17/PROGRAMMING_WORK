// 3d array

class ArrayDemo4
{
	public static void main(String[] args)
	{
		int [][][] arr = new int [][][]{{{1,2,3},{2,3,4},{3,4,5}},{{4,5,6},{5,6,7},{6,7,8}}};
		
		for(int plane=0; plane<=1;plane++)
		{
			int sum=0;
			for(int row=0;row<3;row++)
			{
				for(int col=0;col<3;col++)
				{
					//System.out.print(arr[plane][row][col]+" ");
					sum=sum+arr[plane][row][col];
				}
				System.out.println();
			}
			System.out.println("Sum of "+ plane+" plane is: "+ sum);
		}
		
		
	}
}
