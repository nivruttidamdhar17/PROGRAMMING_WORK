import java.util.*;
class Employee
{
private int eid;
private String ename;
private float salary;

Employee()
{
eid=0;
ename=" ";
salary=0.0;
}

void set(int a, String b, float c)
{
eid=a;
ename=b;
salary=c;
}

void display()
{
System.out.println(eid+" "+ename+" "+salary);
}
}


class ConstructorExample
{
public static void main(String args[])
{
Employee x=new Employee();
x.set(101,"ravi",9000);
x.display();
Employee y=new Employee(101,"jatin",8000);
y.display();
}
}