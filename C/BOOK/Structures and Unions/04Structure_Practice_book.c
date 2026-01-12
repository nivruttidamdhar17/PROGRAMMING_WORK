#include <stdio.h>
#include <string.h>

int position;

struct student
{
    char name[5][10];
    // int marks[10][3][2];
    struct marks
    {
        int marks[5][3];
        char grade[5];
    }ins_marks;
};
struct student instance;


void get_information();
int FindName(char[]);
void DisplayDetails(int);
void FindAverage();



void main()
{
    char name[10];
    printf("\n=================================================================================\n");
    get_information();
    printf("\n--------------------Enter name of the student to find data-----------------------\n");
    scanf("%s",&name);
    printf("\n----------------------Display data whose name is entered-------------------------\n");
    position = FindName(name);
    if(position <= 5)
    {
        DisplayDetails(position);
        position = 255;
    }

    // Call function FindAverage to find the average of students whose less that 45
    FindAverage();

}

void get_information()
{
    printf("--------------------------------Enter student details-------------------------------");
    
    for(int i=0;i<5;i++)
    {
        printf("\nEnter name of the student %d: ",i);
        scanf("%s",instance.name[i]);
    }

    printf("\n--------------------Enter marks and grade of the student-------------------------------\n");
    for(int i=0;i<5;i++)
    {
        printf("--------------------------------Student No %d -------------------------------\n", i);
        for(int j=0;j<3;j++)
        {
            printf("Enter marks of student %d: ",i);
            scanf("%d", &instance.ins_marks.marks[i][j]);
        }
        printf("Enter grade of student %d: ",i);
        scanf("%s", &instance.ins_marks.grade[i]);
    }
}

int FindName(char name[])
{
    int len=strlen(name);
    int result;
    int flag =0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<len;j++)
        {
            if(instance.name[i][j] == name[j])
            {
                result++;
                if(result == len)
                {
                    flag = 1;

                }
            }
            else
                break;
        }
        if(flag == 1)
        {
            printf("Given student record is found");
            return i;
        }
    }
}

void DisplayDetails(int position)
{
    printf("Name of the Student: %s \nMarks in subject \n1)%d \n2)%d \n3)%d\nGrade: %c\n",instance.name[position],  instance.ins_marks.marks[position][0],  instance.ins_marks.marks[position][1],  instance.ins_marks.marks[position][2],  instance.ins_marks.grade[position]);
}

void FindAverage()
{
    float average=0;
    int sum;
    printf("--------------------------------- Print student name whose avg is less than 45  ---------------------------------");
    for(int _i=0;_i<5;_i++)
    {
        for(int i=0;i<3;i++)
        {
            sum = sum + (instance.ins_marks.marks[_i][i]);
        }
        average= sum/3;

        if(average < 45)
        {
            printf("Student name is %s and avg is less than 45 & it is: %f",instance.name[_i], average);
        }
    }
}
