#include <stdio.h>
#include <conio.h>

/*
    PROBLEM STATEMENT:  To implement state machine which manages the states of FAN rotation on user input.
                        on keypress change the speed of fan rotation at runtime.
*/

int main(void)
{
    // Variable Declarations
    int speed;
    int default_val = 1;
    int first_off = 1;

    printf("\n****************** FAN STATE ******************\n");
    printf("\tFan States: \n\t\t0. OFF.\n\t\t1. 200 RPM.\n\t\t2. 250 RPM.\n\t\t3. 300 RPM.\n\t\t4. 350 RPM.\n\t\t5. 400 RPM.\n\t\t6. Exit Application.\n");
    printf("***********************************************\n\n");
    printf("Enter fan speed: ");
    scanf("%d", &speed);

    while(1)
    {
        if(kbhit()) 
        {
            printf("\nPress Enter after keypress!\n");
            scanf("%d", &speed);
            if(speed > 0 && speed <= 5 )
            {
                first_off = 1;
                default_val = 1;
            }
        }
        switch(speed)
        {
            case 0:
                if(first_off)
                {
                    printf("FAN IS OFF\n");
                    first_off = 0;
                }
                break;

            case 1:
                printf("Fan Running in 200 RPM\n");
                Sleep(3500);
                break;
            
            case 2:
                printf("Fan Running in 250 RPM\n");
                Sleep(2500);
                break;
        
            case 3:
                printf("Fan Running in 300 RPM\n");
                Sleep(2000);
                break;

            case 4:
                printf("Fan Running in 350 RPM\n");
                Sleep(1000);
                break;

            case 5:
                printf("Fan Running in 400 RPM\n");
                Sleep(500);
                break;
            case 6:
                printf("Exiting the Applicaiton!");
                return 0;

            default:
                if(default_val)
                {
                    printf("Invalid Option.\n");
                    default_val = 0;
                }
                break;
        }
    }
}
