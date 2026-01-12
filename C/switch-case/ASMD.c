//enter day in integer "1"=sunday, "2"=monday........upto..."7"=saturday, otherwise print invalid day
#include<stdio.h>
int main()
{
    int day;
    printf("enter day in integer\n");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
            printf("sunday\n");
            break;
        case 2:
            printf("monday\n");
            break;
        case 3:
            printf("tuesday\n");
            break;
        case 4:
            printf("wenesday\n");
            break;
        case 5:
            printf("thursday\n");
            break;
        case 6:
            printf("friday\n");
            break;
        case 7:
            printf("saturday\n");
            break;
        default:
            printf("invalid day\n");
            break;
    }
}
