#include<stdio.h>
int main()
{
    int no,ch,pr;
    printf("#LIST OF PRODUCTS IN OUR SHOP\n1.Burger\n2.Pizza\n3.French\n4.Sandwitch\n5.vadapav\n6.samosa\n6.Dhokla\n");
    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("Enter Number Of Burger you want=\n");
            scanf("%d",&no);
            pr=no*250;
            printf("%d Rs is your total bill of burgers",pr);
            break;
        case 2:
            printf("Enter Numbers of Pizzas you want=\n");
            scanf("%d",&no);
            pr=no*180;
            printf("%d Rs is your total bill of pizzas",pr);
            break;
        case 3:
            printf("Enter Numbers of French Dish you want=\n");
            scanf("%d",&no);
            pr=no*240;
            printf("%d Rs is your total bill of french dish",pr);
            break;
        case 4:
            printf("Enter Numbers of Sandwitches you want=\n");
            scanf("%d",&no);
            pr=no*140;
            printf("%d Rs is your total bill of sandwitches",pr);
            break;
        case 5:
            printf("Enter nubers of vadapavs you want=\n");
            scanf("%d",&no);
            pr=no*20;
            printf("%d Rs is your total bill of vadapavs",pr);
            break;
        case 6:
            printf("Enter numbers of samosas you want=\n");
            scanf("%d",&no);
            pr=no*25;
            printf("%d Rs is your total bill of samosas",pr);
            break;
        case 7:
            printf("entr numbers of Dhoklas you want=\n");
            scanf("%d",no);
            pr=no*40;
            printf("%d Rs is your total bill of Dhoklas=\n",pr);
            break;
        default:
            printf("ENTER VALID ENTRY OF ITEM\n");
            break;
        
    }
}