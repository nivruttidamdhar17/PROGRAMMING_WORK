class Employee
{
	int empId= 10;
	Employee()
	{

		System.out.println("in constructor");}

	public static void main(String[] args)
	{
		Employee emp = new Employee();
		System.out.println(emp.empId);
	}

}


