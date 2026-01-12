//program to show when we create object of child class then automatically object of parent class will not be created.

class Program7
{
	Program7()
	{
		System.out.println("parent "+hashCode());
		System.out.println("Parent this: "+this.hashCode());
	}
}

class Child7 extends Program7
{
	Child7()
	{
		System.out.println("Child: "+this.hashCode());
	}
}

class Test7
{
	public static void main(String[] args)
	{
		Child7 C =  new Child7();
		System.out.println("Object: y"+C.hashCode());
	
	}
}
