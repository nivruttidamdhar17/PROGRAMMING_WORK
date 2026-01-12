// program for Reverse string


class Program10
{
	public static void main(String[] args)
	{
		String str1 = "Nivrutti Damdhar";
		StringBuffer sb = new StringBuffer(str1);
		str1 = sb.reverse().toString();     // to string method convert stringBuffer into string
		// str1 = sb.toString();
		
		System.out.println(str1);
	}
}
