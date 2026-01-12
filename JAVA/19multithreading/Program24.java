// sleep Method  it is used when thread dont want to perform any operation for a particular amount of time


class Program24
{
	public static void main(String[] args) throws InterruptedException
	{
		for(int i=1;i<=10;i++)
		{
			System.out.println("Main Thread / slide - "+ i);
			Thread.sleep(5000);
		}
	}
}
