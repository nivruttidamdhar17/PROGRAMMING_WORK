#include <stdio.h>

/*
*   Date format  :  DD - Date  : 1 - 31 (5 bits)  
*   Month format :  MM - Month : 1 - 12 (4 bits)
*   Year format  :  YY - Year  : 0 - 99 (7 bits)
*/

unsigned short pack_data(int day, int month, int year)
{
    unsigned short data;

    // 1. Place Year (7 bits) at the bottom
    data = data | (year & 0x7F);   //  0x7F is 01111111 (Safety Mask)

    // 2. Place Month (4 bits) shifted left by 7
    data = data | ((month & 0x0F) << 7);    // 0x0F is 00001111 (safety mask)

    // 3. Place Day (5 bits) shifted left by 11 (7+4)
    data = data | ((day & 0x1F) << 11);     // 0x1F is 00011111

    return data;
}

// Print binary representation of an short
void print_binary_short(unsigned short num)
{
    unsigned short mask = 1u << (sizeof(short) * 8 -1);
    for(int i=0; i < (sizeof(short) * 8); i++)
    {
        printf("%c", (num & mask) ? '1' : '0');
        mask >>= 1;
    }
    printf("\n");
}

// Print binary representation of an int
void print_binary_int(unsigned int num)
{
    unsigned int mask = 1u << (sizeof(int) * 8 -1);
    for(int i=0; i < (sizeof(int) * 8); i++)
    {
        printf("%c", (num & mask) ? '1' : '0');
        mask >>= 1;
    }
    printf("\n");
}

void main()
{
    int day, month, year;
    day = 29;
    month = 12;
    year = 63;


    short date = pack_data(day, month, year);
    
    printf("Day : ");
    print_binary_int(day);
    printf("Month : ");
    print_binary_int(month);
    printf("year : ");
    print_binary_int(year);
        
    printf("Date : ");
    print_binary_short(date);
}
