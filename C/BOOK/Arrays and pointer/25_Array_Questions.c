#include <stdio.h>

void main()
{



    /*
    // Question No : 01   Consider an array marks[20][5] which stores the marks obtained by 20 students in 5 subjects. Now write a program to
    //a) Find the average marks obtained in each subject
    int arr[20][5] = {{30,50,58,46,35},{40,30,50,50,95},{45,50,40,45,45},{45,55,65,57,40},{35,49,57,56,74},{47,30,35,46,47},{39,34,44,79,57},{53,54,46,40,51},{50,45,59,40,48},{51,49,52,36,49},{47,58,49,48,35},{53,36,32,49,38},{33,25,49,45,26},{48,37,39,67,20},{35,59,38,43,47},{38,24,35,56,37},{28,52,47,34,61},{39,55,34,34,61},{54,54,81,71,67},{35,49,36,39,48}};

    printf("Average marks obtained in each subject : ");
    int sum=0;
    int avg=0;
    for(int i=0;i<5;i++)
    {
        avg=0;
        sum=0;
        for(int j=0;j<20;j++)
        {
            sum=sum+arr[j][i];
        }

        avg=sum/20;
        printf("\nAverage marks obtained in subject %d are : %d",i+1,avg);
    }
    //Find the average marks obtained by every student
    //also Find the number of students who have scored below 50 in their average
    int count=0;
    printf("\n\nAverage marks obtained by every student");
    for(int i=0;i<20;i++)
    {
        sum=0;
        avg=0;
        for(int j=0;j<5;j++)
        {
            sum=sum+arr[i][j];
        }
        avg=sum/5;
        if(avg<50)
        {
            count++;
        }
        printf("\nAverage marks obtained by student no. %d is : %d",i+1,avg);
    }
    printf("\n\nNumber of students who have scored below 50 in their average : %d",count);

    //Display scores obtained by every student
    printf("\n\n\nScores obtained by each student");
    int i=0;
    int j=0;
    for(i=0;i<20;i++)
    {
        printf("\n Marks obtained by student %d in subject : ",i+1);
        for(j=0;j<5;j++)
        {
            printf("S%d = %d, ",j+1,arr[j][i]);
        }
    }
    */





    /*
    // Question no : 02     Read an array of 30 elements and display all the pairs of elements whose sum is 50 
    int arr[30] = {30,15,25,34,24,20,40,23,45,5,10,27,20,45,4,9,25,7,11,24,41,39,46,43,29,31,33,21,49,18};

    printf("pairs of elements whose sum is 50 are : ");
    for(int i=0;i<30;i++)
    {
        for(int j=i;j<30;j++)
        {
            if(arr[i]+arr[j] == 50)
            {
                printf("\nPair is at indexex %d, %d and their values are : %d, %d", i,j, arr[i], arr[j]);
            }
        }
    }
    */


    

    /*
    // Write a program to interchange second element with second last element
    printf("Enter size of an array : ");
    int size;
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements in the array : ");
    for(int i=0;i<size;i++)
    {
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    //interchange elements
    int temp=arr[size-2];
    arr[size-2]=arr[1];
    arr[1]=temp;

    printf("\nFinal array is : ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    */



    /*
    // Write the program to calculate the sum of square of all the elements
    printf("Enter size of the array : ");
    int size;
    scanf("%d",&size);

    printf("Enter elements of the array : \n");
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    int square;
    for(int i=0;i<size;i++)
    {
        square=square + arr[i]*arr[i];
    }
    printf("Sum of all the elements : %d",square);
    */




    /*
    //Question no. 5: Write the program to compute sum and mean of the elements of a two-dimensional array
    printf("Enter size of the array i.e. row and column : \n");
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter elements of the array : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    int count=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum=sum+arr[i][j];
            count++;
        }
    }
    int mean=0;
    mean=sum/count;
    printf("\nSum of the elements of array is : %d \nAnd mean is : %d", sum,mean);
    */





    /*
    int num;
    printf("Enter Number : \n");
    scanf("%d",&num);
    printf("Square of the given number is : %d",Square(num));
    int Square(int num) // take this function out of main()
    {
        int square=num*num;
        return square;
    }
    */



    
    /*
    //Question no. 7 : Write a program that computes the sum of the elements that are sotred on the main diagonal of a matrix using pointers.
    int m,n;
    printf("Enter size of the matrix i.e. rows and columns: \n");
    scanf("%d",&m);
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter elements of the matrix : ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    //printf("Sum of all diagonal elements of the 2D array is : ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+*(*(arr+i)+j);
            }
        }
    }
    printf("Sum of the diagonal elements : %d",sum);
    */




   /*
    //Question no.08   Write a program to add two 3x3 matrix using pointers
    int arr1[3][3];
    int arr2[3][3];
    int i=0;
    int j=0;
    int arradd[3][3];
    printf("Enter elements of array 1 : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("arr1[%d][%d] : ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("\nEnter elements of array 2 : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("arr2[%d][%d] : ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            *(*(arradd+i)+j) = *(*(arr1+i)+j) + *(*(arr2+i)+j);
        }
    }

    printf("Addition of both the arrays is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arradd[i][j]);
        }
        printf("\n");
    }
    */




    /*
    // Question no : 9   Write a program that computes the product of the elements that are stored on the diagonal above the main diagonal
    int size;
    printf("Enter size of matrix : ");
    scanf("%d",&size);
    int arr[size][size];
    printf("Enter elements of the matrix\n");
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    int product = 1;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if((j-i) == 1)
            {
                product = product*arr[i][j];
            }
        }
    }

    printf("Entered matrix is : \n");
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nProduct of diagonal elements above main diagonal is : %d",product);
    */






    /*
    //Question no: 10    Write a program to count the total number of non-zero elements in a two-directional array.
    int count;
    int m;
    int n;
    printf("Enter no of rows in array : ");
    scanf("%d",&m);
    printf("Enter no of columns in array : ");
    scanf("%d",&n);

    int arr[m][n];
    printf("Enter elements of the array : \n");

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Entered array is : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
            if(arr[i][j] > 0)
            {
                count++;
            }
        }
        printf("\n");
    }
    printf("\nNumber of non zero elements are : %d",count);
    */



    
    

    /*
    //Question 11 :  Write a program to input the elemetns of a two-dimensional array. Then from this array, make two arrays one that stores all odd elements of the two-dimensional array and the other that stores all even elements of the array.
    int m;
    int n;
    printf("Enter no of rows in array : ");
    scanf("%d",&m);
    printf("Enter no of columns in array : ");
    scanf("%d",&n);

    int arr[m][n];
    int odd[m*n];
    int even[m*n];
    printf("Enter elements of the array : \n");

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int even_index = 0;
    int odd_index = 0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j] % 2 == 0)
            {
                even[even_index] = arr[i][j];
                even_index++;
            }
            else
            {
                odd[odd_index]= arr[i][j];
                odd_index++;
            }
        }
    }

    printf("Origanal 2D array is : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("Even elements array is : \n");
    for(int i=0; i<even_index;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\nOdd elements array is : \n");
    for(int i=0;i<odd_index;i++)
    {
        printf("%d ",odd[i]);
    }
    */





    
    
    
}









/*Problem statement: Write a C program that implements the following features:
The program should be able to read a text file containing a list of numbers.
The program should be able to find the minimum and maximum numbers in the list.
The program should be able to calculate the average of the numbers in the list.
The program should be able to print the minimum, maximum, and average numbers to the console.
The program should be able to write the minimum, maximum, and average numbers to a new text file.
Additional requirements:
The program should be well-formatted and easy to read.
The program should be modularized and reusable.
The program should be efficient and use minimal resources.
Bonus features:
The program should be able to handle errors gracefully.
The program should be able to be customized by the user.
The program should be able to be extended to implement additional features.
This problem statement can be used to write a C program of at least 200 lines. The program will need to implement the following features:
Reading a text file containing a list of numbers.
Finding the minimum and maximum numbers in the list.
Calculating the average of the numbers in the list.
Printing the minimum, maximum, and average numbers to the console.
Writing the minimum, maximum, and average numbers to a new text file.
The program should also be well-formatted, modularized, reusable, efficient, and error-handling. The program can also be customized by the user and extended to implement additional features.
*/




















/*#include <stdio.h>
#include <stdlib.h>
// Function to read a text file containing a list of numbers
int read_numbers(char *filename, int *numbers) {
// Open the file
FILE *file = fopen(filename, "r");
if (file == NULL) {
printf("Error opening file: %s\n", filename);
return -1;
}
// Read the numbers from the file
int i = 0;
while (fscanf(file, "%d", &numbers[i]) != EOF) {
i++;
}
// Close the file
fclose(file);
// Return the number of numbers read
return i;
}
// Function to find the minimum and maximum numbers in a list
void find_min_max(int *numbers, int num_numbers, int *min, int *max) {
// Initialize the minimum and maximum numbers
*min = numbers;
*max = numbers;
// Iterate over the numbers and find the minimum and maximum
for (int i = 1; i < num_numbers; i++) {
if (numbers[i] < *min) {
*min = numbers[i];
}
if (numbers[i] > *max) {
*max = numbers[i];
}
}
}
// Function to calculate the average of a list of numbers
float calculate_average(int *numbers, int num_numbers) {
// Calculate the sum of the numbers
int sum = 0;
for (int i = 0; i < num_numbers; i++) {
sum += numbers[i];
}
// Calculate the average
float average = (float) sum / num_numbers;
// Return the average
return average;
}
// Function to print the minimum, maximum, and average numbers to the console
void print_results(int min, int max, float average) {
printf("Minimum: %d\n", min);
printf("Maximum: %d\n", max);
printf("Average: %.2f\n", average);
}
// Function to write the minimum, maximum, and average numbers to a new text file
void write_results(char *filename, int min, int max, float average) {
// Open the file
FILE *file = fopen(filename, "w");
if (file == NULL) {
printf("Error opening file: %s\n", filename);
return;
}
// Write the results to the file
fprintf(file, "Minimum: %d\n", min);
fprintf(file, "Maximum: %d\n", max);
fprintf(file, "Average: %.2f\n", average);*/