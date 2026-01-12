/**
 * C program to find 2s complement of a binary number
 */

 #include <stdio.h>

 #define SIZE 8
 
 int main()
 {
    char binary[SIZE+1];
    char onesComplement[SIZE+1];
    char twosComplement[SIZE+1];
    int i, error=0, carry=1;

    printf("Enter %d bit binary number : ", SIZE);
    
    // Get input binary string
    gets(binary);

    /* Store all inverted bits of binary value to onesComp */
    for(i=0; i<SIZE; i++)
    {
        if(binary[i] == '0')
        {
            onesComplement[i] = '1';
        }
        else if(binary[i] == '1')
        {
            onesComplement[i] = '0';
        }
        else
        {
            printf("Invalid Input");
            error = 1;

            break;
        }
    }
    onesComplement[SIZE] = '\0';

    for(i = SIZE-1; i>=0; i--)
    {
        if(onesComplement[i] == '0' && carry == 1)
        {
            twosComplement[i] = '1';
            carry = 0;
        }
        else if(onesComplement[i] == '1' && carry == 1)
        {
            twosComplement[i] = '0';
        }
        else
        {
            twosComplement[i] = onesComplement[i];
        }
    }

    if(error == 0)
    {
        printf("Original binary = %s\n", binary);
        printf("Ones complement = %s\n", onesComplement);
        printf("Twos complement = %s\n", twosComplement);
    }
 }