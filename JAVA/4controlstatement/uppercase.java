class UppercaseDemo
{
	public static void main(String[] args)
	{
		char ch='A';
		if(ch>='A' && ch<='Z')
		{
			System.out.println("You entered UPPERCASE character");
		}
		else if(ch>='a' && ch<='z')
		{
			System.out.println("You entered lowecase character");
		}
		else
		{
			System.out.println("other");
		}
	}
}
