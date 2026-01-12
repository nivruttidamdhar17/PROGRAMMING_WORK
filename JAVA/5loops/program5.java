// take numbers of from 1 to 10 and take cube of them and print only if their cube is even.
class ForDemo5
{

	public static void main(String[] args)
	{
		for(int i=1; i<=10; i++)
		{	int cube=i*i*i;
			if(cube%2==0)
			{System.out.println(i+" : "+cube);}
		}
	}
}
