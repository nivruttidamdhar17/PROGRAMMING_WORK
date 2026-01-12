//program for showing that when we create child class constructor automatically parent class constructor is not created. using hashcode of object, child class constructor and parent class constructor we can show that.


class Parent6
{
	int age;
	String name;
	Parent6(String name, int age)
	{
		this.age=age;
		this.name=name;
		System.out.println("Parent: "+hashCode());
		System.out.println("parent this:"+this.hashCode());
		System.out.println("Age: "+age);	
	}

}
class Student extends Parent6
{

	int roll_no;
	int marks;
	Student(String name, int age, int roll_no, int marks)
	{
		super(name,age);
		System.out.println("Student"+this.hashCode());
	}	

	public static void main(String[] args)
	{
		Student std = new Student("nivrutti", 21, 23, 89);
		System.out.println("Object: "+std.hashCode());
	}

}



