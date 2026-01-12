// 

class ConstructorDemo
{
	public static void main(String[] args)
	{
		//constr1
		String str1 = new String();

		//constructor2
		String str2 = new String("Java12");

		//constructor3
		char[] arr = {'j','a','v','a','1','2'};
		String str3 = new String(arr);

		System.out.println(str1);
		System.out.println(str2);
		System.out.println(str3);
	}
}
