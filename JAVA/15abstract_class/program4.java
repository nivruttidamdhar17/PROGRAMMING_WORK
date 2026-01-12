// in this program using constructor of abstract parent class which avoid reusbility of the programme


abstract class  Person4
{
	String name;
	int age;
	Person4(String name,int age)
	{
		this.name=name;
		this.age=age;
	}
}
class Student4 extends Person4
{
	int roll_no;
	int marks;
	Student4(String name, int age, int roll_no, int marks)
	{
		super(name,age);
		this.roll_no=roll_no;
		this.marks=marks;
		System.out.println("name: "+name + "	Age: "+age+"	roll_no: "+roll_no+"	Marks: "+marks);
	}
}
class Teacher4 extends Person4
{
	double salary;
	String subject;
	Teacher4(String name, int age, int roll_no, String subject)
	{
		super(name,age);
		this.salary=salary;
		this.subject=subject;
		System.out.println("Name: "+name+"	Age: "+age+"    roll_no: "+roll_no +"    Subject: "+subject);
	}
}
class Test4
{
	public static void main(String[] args)
	{	
		Student4 std=new Student4("Nivrutti",21,10,79);
		Teacher4 tech=new Teacher4("Sir",47,231,"java");
		
	}
}
