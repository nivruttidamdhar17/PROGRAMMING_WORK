//in this program if we take more variables in abstract parent class  then in child classes we have to  implement it more times this is drawback of this program for that we take constructor of abstract class so ti avoid code reusability in the code. and that drawvack is recovered in program4 of thsi folder

abstract class  Person3
{
	String name;
	int age;
}
class Student3 extends Person3
{
	int roll_no;
	int marks;
	Student3(String name, int age, int roll_no, int marks)
	{
		this.name=name;
		this.age=age;
		this.roll_no=roll_no;
		this.marks=marks;
		System.out.println("name: "+name + "	Age: "+age+"	roll_no: "+roll_no+"	Marks: "+marks);
	}
}
class Teacher3 extends Person3
{
	double salary;
	String subject;
	Teacher3(String name, int age, int roll_no, String subject)
	{
		this.name=name;
		this.age=age;
		this.salary=salary;
		this.subject=subject;
		System.out.println("Name: "+name+"	Age: "+age+"    roll_no: "+roll_no +"    Subject: "+subject);
	}
}
class Test3
{
	public static void main(String[] args)
	{	
		Student3 std=new Student3("Nivrutti",21,10,79);
		Teacher3 tech=new Teacher3("Sir",47,231,"java");
		
	}
}
