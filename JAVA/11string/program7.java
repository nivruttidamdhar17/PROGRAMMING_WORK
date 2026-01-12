class IdentityHashCode
{
	public static void main(String[] args)
	{
		String str1 = new String("Core2Web");
		String str2 = "Core2Web";

		System.out.println(System.identityHashCode(str1));
		System.out.println(System.identityHashCode(str2));
						

		
	}
}
