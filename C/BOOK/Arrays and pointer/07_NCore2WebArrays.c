#include<stdio.h>

void main()
{
    /*int arr[5];
    int sum=0;

    printf("Enter elements in arrya: \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum of all elements in the arrays is: %d",sum);*/



    /*
    printf("Program to search element in the array \nEnter size of array : ");
    int size;
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements in the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }

    int search;
    int flag=0;
    printf("Enter number to search in the array: ");
    scanf("%d",&search);

    for(int i=0;i<size;i++)
    {
        if(arr[i]==search)
        {
            printf("Number is present in the array at a index of : %d",i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Number is not present in array");
    }
    */


   /*
    int arr1[3]={10,20,30};
    printf("arr1 is : \n");
    for (int i=0;i<3;i++)
    {
            printf("%d ", arr1[i]);
    }

    int arr2[3]={40,50,60};
    printf("\nArray 2 is: \n");
    for(int i=0;i<3;i++)
    {
            printf("%d ", arr2[i]);
    }


    //arr2=arr1;    // this will give error, we have to put elements one by one

    for(int i=0;i<3;i++)
    {
        arr2[i]=arr1[i];
    }


    printf("\nArray 2 after assigning arr1 to it is: \n");
    for(int i=0;i<3;i++)
    {
            printf("%d ", arr2[i]);
    }
    */




    /*
    int arr1[3];
    printf("size of arr1 is : %ld" ,sizeof(arr1));

    int arr2[2];
    printf("\nSize of arr2 is : %ld", sizeof(arr2));

    int arr3[0];
    printf("\nsize of arr3 is : %ld", sizeof(arr3));
    */


    
    /*
    // check arrays are equal or not
    // the below program will not show that arrays are equal because it compares addresses
    int iarr1[3]={10,20,30};
    int iarr2[3]={10,20,30};

    if(iarr1==iarr2)
    {
        printf("Arrays are equal");
    }
    else{
        printf("Arrays are not equal");  
    }
    */



   /*
    int arr1[3]={10,20,30};
    int arr2[3]={10,20,35};

    int flag=0;

    for(int i=0;i<3;i++)
    {
        if(arr1[i]==arr2[i])
        {
            flag=1;
        }
        else{
            flag=0;
            break;
            }
    }
    if(flag==0)
    {
        printf("Arrays are unequal");
    }
    else
        printf("Arrays are equal");
    */







    /*
    int size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter elements in the array: \n");
    for(int i=0;i<size;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }


    // for largest element
    int large = arr[0];

    for(int i=1;i<size;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }


    // for second large element
    int sec_large=arr[1];

    for(int i=0;i<size;i++)
    {
        if(arr[i] != large)
        {
            if(arr[i]>sec_large)
            {
                sec_large=arr[i];
            }
        }
    }
    printf("Largest element in the array is : %d\n",large);
    printf("Second largest element in the array is : %d\n",sec_large);
    */




    /*int arr[10]={10,20,30,40,50,60};
    int append=70;
    int offset;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
    {
        if(arr[i]== '\0')
        {
            offset=i;
            break;
        }
    }
    arr[offset]=append;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
    {
        printf("%d ",arr[i]);
        if(offset==i)
        {
            break;
        }
    }*/



    /*// in this type of inserting last element will be lost from the array
    int size;
    printf("Enter size of the array : ");
    scanf("%d",&size);

    printf("Enter elements in the array : ");
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("\narr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
     
    int ins_num;
    printf("\nEnter number to insert it in the array: ");
    scanf("%d",&ins_num);

    int pos;
    printf("\nEnter position at which it has to be inserted : ");
    scanf("%d",&pos);

    for(int i=size-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=ins_num;
    for(int i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }
    */


    
    /*
    //Here as we kept last elememt null last element will not lost from array after insertion.
    int size;
    printf("Enter size of the array : ");
    scanf("%d",&size);

    printf("Enter elements in the array: ");
    int arr[size+1];
    for(int i=0;i<size;i++)
    {
        printf("\narr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
     
    int ins_num;
    printf("\nEnter number to insert it in the array: ");
    scanf("%d",&ins_num);

    int pos;
    printf("\nEnter position at which it has to be inserted : ");
    scanf("%d",&pos);

    for(int i=size;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=ins_num;
    for(int i=0;i<size+1;i++)
    {
        printf("%d ", arr[i]);
    }*/





    /*
    //Write program to insert a number in an array that is already sorted in ascending order.
    int size;
    printf("Enter size of the array : ");
    scanf("%d",&size);

    int arr[size+1];
    printf("Enter elements in the array in ascending order : ");
    for(int i=0;i<size;i++)
    {
        printf("\narr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    int ins_num;
    printf("Enter element which to be inserted : ");
    scanf("%d",&ins_num);

    for(int i=size-1;i>0;i--)
    {
        if(arr[i-1]<ins_num && arr[i]>ins_num)
        {
            arr[i+1]=arr[i];
            arr[i]=ins_num;
            break;
        }
        else if(arr[i]>ins_num)
        {
            arr[i+1]=arr[i];
        }
    }

    printf("Array after inserting elements is : ");
    for(int i=0;i<size+1;i++)
    {
        printf("%d ",arr[i]);
    }*/




    /*
    //Program to delete an element from the array
    // Write a program to delete a number from a given location
    int size;
    printf("Enter size of the array : ");
    scanf("%d",&size);

    printf("Enter elements in the array : ");
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("\narr[%d] = ",i);
        scanf("%d", &arr[i]);
    }

    int pos;
    printf("Enter position from which element to ve deleted : ");
    scanf("%d",&pos);
    for(int i = pos; i<size; i++)
    {
        arr[i]=arr[i+1];
    }

    printf("Array after deleting element from the array is : ");
    for(int i=0; i<size-1; i++)
    {
        printf("%d ", arr[i]);
    }*/




    /*
    int size;
    printf("Enter size of the array : ");
    scanf("%d",&size);

    printf("Enter elements of the array in ascending order : ");
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("\narr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    int del_ele;
    printf("Enter element to be removed : ");
    scanf("%d",&del_ele);

    for(int i=0;i<size;i++)
    {
        if(arr[i] >= del_ele)
        {
            arr[i]=arr[i+1];
        }
    }

    printf("\n Array after deleting element : \n");
    for(int i=0;i<size-1;i++)
    {
        printf("%d ",arr[i]);
    }*/




    /*
    //Program to read an array of n numbers and then find the smallest number
    int size;
    printf("Enter size of the array : ");
    scanf("%d",&size);


    int arr[size];
    arr[size] = read_array(arr, size);

    // method to find smallest element of the array
    int small = 0;
    small = small_num(arr, size, small);

    // function to read the array
    int read_array(int arr[] ,int size)
    {
        printf("Enter elements in the array : ");
        for(int i=0;i<size;i++)
        {
            printf("\narr[%d] : ",i);
            scanf("%d",&arr[i]);
        }
        return arr[];
    }
    
    int small_num(int arr[], int size ,int small_no)
    {
        small_no=0;
        for(int i=0;i<size;i++)
        {
            if(small_no<arr[i])
            {
                break;
            }
            else
            {
                
            }
        }
    }
    */





    /*
    //write program to generate pascal'a array.
    printf("Enter row and column value: ");
    int row;
    int column;
    scanf("%d",&row);
    scanf("%d",&column);

    int arr[row][column];
    printf("Enter elements of the array : ");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("\narr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Pascal's array is : \n");

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(i>=j)
            {
                printf("%d ",arr[i][j]);
            }
            if(i<j)
            {
                printf(" ");
            }
             
        }
        printf("\n");
    }
    */





   /*
   // in a small company there are five salesman. Each salesman is suppose to sell three products. Write a program using 2D array to print 1) total sales by each salesman and 2) total sales of each product.

    int products;
    printf("Enter no of products: ");
    scanf("%d", &products);
    int salesman;
    printf("Enter no of salesmans: ");
    scanf("%d", &salesman);
   int company[salesman][products];
   printf("Enter product sale by salesmans: ");
   for(int i=0;i<salesman;i++)
   {
        printf("\nEnter items sale by samesman %d : ",i+1);
        for(int j=0;j<products;j++)
        {
            scanf("%d", &company[i][j]);
        }
   }

    printf("\nTotal sales by each salesman : ");
    int total_salesByEach = 0;
    for(int i=0;i<salesman;i++)
    {
        int j;
        for(j=0;j<products;j++)
        {
            total_salesByEach+=company[i][j];
        }
        printf("\nTotal sales by salesman is %d : %d",i+1, total_salesByEach);
        total_salesByEach=0;
    }

    printf("\nTotal sales of each products is : ");
    int total_salesOfEachProduct;
    for(int i=0;i<products;i++)
    {
        int j;
        for(j=0;j<salesman;j++)
        {
            total_salesOfEachProduct+=company[j][i];
        }
        printf("\nTotal sales of product %d is : %d",i+1,total_salesOfEachProduct);
        total_salesOfEachProduct=0;
    }
    */


    

}