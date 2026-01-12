// Create a structure student roll no, name, course, percentage. enter n students detail and display then, display only student who have max per, display by name, display students details whose name starts with hi, display student whose name ending with sh.

struct student
{
    int rno;
    char sname;
    char course;
    float per;
};
int main()
{
    struct student x[100],s;
    int i,n,r;
    float max;
    printf("Enter n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter student details\n");
        scanf("%d%s%s%f",&x[i].rno,&x[i].sname,&x[i].course,&x[i].per);
    }
    printf("Display student details\n");
    for(i=0;i<n;i++)
    {
        printf("%d %s %s %f\n",x[i].rno,x[i].sname,x[i].course,x[i].per);
    }
    max=x[0].per;
    s=x[0];
    for(i=0;i<n;i++)
    {
        if(max<x[i].per);
        {
            max=x[i].per;
            s=x[i];
        }
    }

    printf("Display student who have max percentage\n");
    printf("%d %s %s %f\n",x[i].rno,x[i].sname,x[i].course,x[i].per);
    printf("Enter student name\n");
    scanf("%s",r);
    for(i=0;i<n;i++)
    {
        if (strcmp(r,x[i].sname)==0);
        {
            printf("%d %s %S %d",x[i].rno,x[i].sname,x[i].course,x[i].per);
        }
    }
    printf("Display student whose names start with hi\n");
    for(i=0;i<n;i++)
    {
        if(x[i].sname[0]=="h"&&x[i].sname[1]=="i")
        {
            printf("%d %s %S %d",x[i].rno,x[i].sname,x[i].course,x[i].per);
        }
    }
}