class Parent
{
	static
	{
		System.out.println("in parent static block");
	}
	Parent ()
	{
		System.out.println("in parent constr");
	}
}
class Child extends Parent
{
	static
	{
		System.out.println("in child static block");
	}
	Child()
	{
		System.out.println("in child constr");
	}
	/*public static void main(String[] args)
	{
		Parent p = new Parent();
		Child c = new Child();
	}*/
}
class Demo
{
	public static void main(String[] args)
	{
		Parent p = new Parent();
		Child c = new Child();
		Child c1 = new Child();
	
		Child c2 = new Child();
		Child c3 = new Child();
		Child c4 = new Child();
		Child c5 = new Child();
		Child c6 = new Child();
		Child c7 = new Child();
		Child c8 = new Child();
		Child c9 = new Child();
		Child c10 = new Child();
		Child c11 = new Child();
		Child c12 = new Child();
		Child c13 = new Child();
		Child c14 = new Child();
		Child c15 = new Child();
		Child c16 = new Child();
		Child c17 = new Child();
		Child c18 = new Child();
		Child c19 = new Child();
		Child c20 = new Child();
		Child c21 = new Child();
		Child c22 = new Child();
		Child c23 = new Child();
		Child c24 = new Child();
		Child c25 = new Child();
		Child c26 = new Child();
		Child c27 = new Child();
		Child c28 = new Child();
		Child c29 = new Child();
		Child c30 = new Child();	
	
	}
}

