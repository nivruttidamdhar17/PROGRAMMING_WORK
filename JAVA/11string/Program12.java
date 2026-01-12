// Program for reversing the string without using reverse() method.


class Program12
{
	public static void main(String[] args)
	{
		String str1="Nivruttidamdhar";
		int n = str1.length();
		String rev="";

		for(int i=n-1;i>=0;i--)
		{
			rev = rev +(str1.charAt(i));
			
		}
		System.out.println("reverse string is "+rev);
		
		
	}
}
