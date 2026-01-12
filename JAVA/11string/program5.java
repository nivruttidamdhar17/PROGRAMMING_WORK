// program for string methods

class StringMethod
{
	public static void main(String[] args)
	{
		//1.Concat
		//str1.concat(str2)

		String str1 = "Core2Web";
		String str2 = "Binecaps";

		System.out.println(str1.concat(str2));   //Core2WebBinecaps

		// 2.length
		// str1.length()
		System.out.println(str1.length());     //8
		
		// 3.compareTo(String)
		// str1.compareTo(str2)
		// 0 : equal
		// +ve : str1 < str2  (difference between ascii vlaues)
		// -ve : str1 > str2
		str1 = "Nivrutti";
		str2 = "nivrutti";

		System.out.println(str1.compareTo(str2));

		//4.compareToIgnoreCase(String)
		//str1.compareToIgnoreCase
		// this mehtod compare string but it ignore the upper or lower case

		System.out.println(str1.compareToIgnoreCase(str2));
	}			
}
