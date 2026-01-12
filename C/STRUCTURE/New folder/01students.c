// ENTER TWO STUDENTS DETAILS AND DISPLAY THEM.

#include<stdio.h>
struct student
{
    int rno;
    char sname[30];
    char course[60];
    float per;
};
int main()
{
    struct student x,y;
    printf("Enter first stuedent details\n");
    scanf("%d%s%s%f",&x.rno,&x.sname,x.course,x.per);
    printf("Enter second student details\n");
    scanf("%d%s%s%f",&y.rno,&y.sname,&y.course,&y.per);
    printf("%d %s %s %f\n",x.rno,x.sname,x.course,x.per);
    printf("%d %s %s %f\n",y.rno,y.sname,y.course,y.per);
}