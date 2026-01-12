// program for automorphic number

import java.io.*;
class InputAssign7
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Check whether number is automorphic or not: ");
		int no = Integer.parseInt(br.readLine());
		int d;
		int d1;
		int ld = 0; //last digit
		int t = no;
		int sq = no*no;
		int p;
		int p1;
		while(sq != 0)
		{
			d=sq%10;
			sq=sq/10;
			p=d;
		}

		while(no != 0)
		{
			d1 = no% 10;
			no = no/10;
			p1 = d1;
		}
		if(p == p1)
		{
			System.out.println("yes it is automortphic number");
		}
		else
			System.out.println("no it is not automorphic number");
	}
}
