#include<stdio.h>
void main()
{
    struct student
    {
        int r_no;
        float fees;
        char name[30];
        char dob[11];
    } std1;
    printf("Enter Student datails ");
    printf("\nEnter roll no of the student :\n");
    scanf("%d",&std1.r_no);
    printf("Enter fees of the student : \n");
    scanf("%f",&std1.fees);
    printf("Enter name of the student : \n");
    scanf("%s",std1.name);
    //gets(std1.name);
    printf("Enter date of birth : \n");
    scanf("%s",std1.dob);

    printf("\n\nStudent details are\nStudent name : %s",std1.name);
    printf("\nRoll no of the student : %d",std1.r_no);
    printf("\nFees of the student : %f",std1.fees);
    printf("\nDate of birth is : %s",std1.dob);

}