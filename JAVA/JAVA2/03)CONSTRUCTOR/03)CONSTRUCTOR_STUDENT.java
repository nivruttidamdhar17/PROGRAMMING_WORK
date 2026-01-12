//enter 2 student details and display them using constructor

import java.util.*;
class Student
{
private int rno;
private String sname;
private float per;

Student()
{
rno=0;
sname=" ";
per=0.0f;
}

Student(int a, int b, int c)
{

}
void display()
{
System.out.println(rno+" "+sname+" "+per);
}
}


Class demo
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in)
int p, String q; float r;
System.out.println("Enter student detials");
p=sc.nextInt();
q=sc.next();
r=sc.nextFloat();


Scanner x=new Student(p,q,r);
System.out.println("Enter second Student details");
p=sc.nextInt();
q=sc.next();
r=sc.nextFloat();

Student y=new Student(p,q,r);
x.display();
y.display();
}
}