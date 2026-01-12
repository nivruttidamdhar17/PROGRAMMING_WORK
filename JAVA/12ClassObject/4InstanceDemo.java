class InstanceDemo4
{

	int x= 10;
	{
		int y=20;
	}
	int m1()
	{
		int z = 30;
		System.out.println(z);
	}
	public static void main(String[] args){
		InstanceDemo4 obj = new InstanceDemo4();
		System.out.println(obj.x);
		obj.m1();
	}
}
