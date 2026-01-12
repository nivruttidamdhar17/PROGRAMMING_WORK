import java.util.*;
class Test
{
void show()
{System.out.println("php");}
Test(int a, float b)  	//paramaterised constructor
{Sysyem.out.println(a+" "+b);}
}


class Sample
{
public static void main(String args[])
{
Test x=new Test(7,9.3);
x.show();
Test y=new Test();
y.show();
}
}