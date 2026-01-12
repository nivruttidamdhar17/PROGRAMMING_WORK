/* C program to count frequency of digits in an integer */
#include <stdio.h>

int main(void)
{
    int num;
    int digit;
    int freq[10];
    printf("Enter A number : ");
    scanf("%d", &num);

    memset(freq, 0, sizeof(freq));
    // Frequncy of digits in number
    while(num > 0)
    {
        digit = num % 10;
        num = num / 10;
        for(int i=0; i< 10; i++)
        {
            if(digit == i)
                freq[i] = freq[i] + 1;
        }
    }
    
    printf("Frequency of digits in given number is\n");
    for(int i=0; i<10; i++)
    {
        printf("Frequency of %d is : %d\n", i, freq[i]);
    }
    return 0;
}
