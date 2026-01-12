import java.io.*;
import java.util.*;
public class tcscode{
    
    //code to find sum of  multiplicaiton of given input with table
    /*public static void main(String[] args)
    {
        int N;
        Scanner sc = new Scanner(System.in);  // Create a Scanner object
        System.out.println("Enter Input");
        N = sc.nextInt();
        int sum=0;
        int mul;
        for(int i=1;i<=10;i++)
        { 
            mul = i*N;
            sum=sum+mul;
            mul=0;
        }
        System.out.println("Output is : "+sum);

    }*/




     /*
    // code to find maximum element from each subarrays of given size.
    public static void main(String[] args)
    {
        int arr[]={2,4,7,1,6,3};
        int size = arr.length;
        int K = 3;

        int max=arr[0];
        for(int i=0;i<=(size-K);i++)
        {
            max=arr[i];
            for(int j=i;j<i+K;j++)
            {
                if(max<arr[j])
                {
                    max=arr[j];
                }
            }
            System.out.println(max);
        }

    }
    */
    




    
    /*public static void subarray(int arr[])
    {
        int totalSubarrays=0;
        int max=0;
        int min=Integer.MAX_VALUE;
        for(int i=0;i<=arr.length;i++)
        {
            
            int temp=0;
            for(int j=i;j<arr.length;j++)
            {  
                for(int k=i;k<=j;k++)
                {
                    System.out.print(arr[k]+"  ");
                }
                totalSubarrays++;
                temp+=arr[j];
                if(temp>max)
                {
                    max=temp;
                }
                if(temp<min)
                {
                    min=temp;
                }
                System.out.print("Sum of subarray is: "+temp);
                System.out.println();
            }
            System.out.println();
            
        }
        System.out.println("Total no of subarrays: "+totalSubarrays);
        System.out.println("Maximum sum of subarrys from given array  is: "+max);
        System.out.println("Minimum sum from subarrays of given array is: "+min);
    }
    public static void main(String[] args)
    {
        
        Scanner sc=new Scanner(System.in);
        
        System.out.println("Enter length of the array: ");
        int length = sc.nextInt();
        int arr[]=new int[length];
        System.out.println("Enter elements in the array: ");
        for(int i=0;i<length;i++)
        {
            arr[i]= sc.nextInt();
        }
        subarray(arr);
    }*/






    /*public static void main(String[] args)
    {
        int len;
        System.out.println("Enter length of array: ");
        Scanner sc= new Scanner(System.in);
        len = sc.nextInt();
        int nums[] = new int[len];
        System.out.println("Enter elements in the array: ");
        for(int i=0;i<len;i++)
        {
            nums[i]= sc.nextInt();
        }
        System.out.println("Enter sum of the subarray : ");
        int sum = sc.nextInt();

        int temp=0;

        for(int i=0;i<=len;i++)
        {
            temp=0;
            for(int j=i;j<len;j++)
            {
                for(int k=i;k<=j;k++)
                {
                    //System.out.print(nums[k] + " ");
                    temp = temp+nums[k];
                }
                if(temp == sum)
                {
                    for(int k=i;k<=j;k++)
                    {
                        System.out.print(nums[k]+" ");
                    }
                    System.out.println();
                }
                temp=0;
            }

        }
    }*/





    /*public static void main(String[] args)
    {
        int len;
        int flag=1;
        System.out.println("Enter length of array: ");
        Scanner sc= new Scanner(System.in);
        len = sc.nextInt();
        int arr[] = new int[len];
        System.out.println("Enter elements in the array: ");
        for(int i=0;i<len;i++)
        {
            arr[i]= sc.nextInt();
        }
        int sum=0;

        for(int i=0;i<len;i++)
        {
            for(int j=i+1;j<len;j++)
            {
                if(arr[i] == arr[j])
                {
                    arr[i] = arr[i]+1;
                }
                if(arr[j] < 0)
                {
                    flag=0;
                }
            }
            sum = sum+ arr[i];
        }
        if(flag == 0)
        {
            System.out.println("Wrong Input");
        }
        else{
            System.out.println("Sum of array is : "+sum);
        }
    }*/









    /* Problem
            The function takes two integrals m and n as arguments. You are required to obtain the total of all integers ranging between 1 to n (both inclusive) which are not divisible by m. You must also return the distinction between the sum of integers not divisible by m with the sum of integers divisible by m.
            Assumption
            m > 0 and n > 0
            Sum lies within the integral range
            Example
            Input:
            m = 6
            n = 30
            Output:
            285
            Integers divisible by 6 are 6, 12, 18, 24, and 30. Their sum is 90.
            Integers that are not divisible by 6 are 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 25, 26, 27, 28, and 29. Their sum is 375.
            The difference between them is 285 (375 – 90).  
    */

    /*public static void main(String[] args)
    {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter value of m and n: ");
        int n=sc.nextInt();
        int m= sc.nextInt();

        int div_by_m=0;
        int non_div_by_m=0;

        for(int i=1;i<=m;i++)
        {
            if(i % n == 0)
            {
                div_by_m = div_by_m + i;
            }
            else{
                non_div_by_m = non_div_by_m + i;
            }
        }
        int result = Math.abs(div_by_m-non_div_by_m);
        System.out.println("Difference between sum of divisible by m and non divisble by m is : "+ result);
    }*/








    /*//Pairs in array
    public static void pairMaker(int arr[])
    {
        int totalPairs=0;
        int first=0;
        int last=arr.length-1;

        for(int i=first;i<=last;i++)
        {
            for(int j=i+1;j<=last;j++)
            {
                System.out.print("("+arr[i]+" "+arr[j]+"),  ");   
                totalPairs++;      
            }
            System.out.println();
            first++;
            
        }
        System.out.println("total Pairs: "+ totalPairs);
    }
    public static void main(String[] args)
    {
        int arr[]={4,7,2,8,9,3,5};

        pairMaker(arr);
    }*/







    //Armstrong number
    /*public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        
        System.out.println("Enter number to check is it armstrong number : ");
        int num = sc.nextInt();
        int temp = num;
        int digit = 0;
        int sum = 0;
        int last;
        while(num>0)
        {
            num = num/10;
            digit++;
            //System.out.println("Digit is "+digit);
        }
        num = temp;
        while( num > 0)
        {
            last = num%10;
            num = num/10;
            sum = sum + (int)Math.pow(last, digit);
            //sum = sum+last*last*last;
            //System.out.println("Last digit is : "+ last);
        }
        //System.out.println("Sum and num is "+sum+"   " +num+ "  "+temp);

        if(sum == temp)
        {
            System.out.println("Entered number is armstrong number");
        }
        if(sum != temp)
        {
            System.out.println("It is not prime number");
        }
    }*/


    /*
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int num1 = sc.nextInt();
        int num2 = sc.nextInt();        

        int num3 = num1-num2*i;
        // while(num3 > num2)
        // {
        //     i=i+1;
        //     num3 = num1 - (num2*i);
        // }
        // System.out.println(i);
    }
    */



    
    /*public static void main(String[] args)
    {
        System.out.println("Check whether the given number is palindrome or not, Enter number:  ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int n2=0;
        int d=0;
        int temp=num;
        while(num > 0)
        {
            d = num%10;
            num = num / 10;
            n2 = (n2*10)+d;
        }
        if(temp == n2)
        {
            System.out.println("Number is palindrome and it is: "+ n2);
        }
    }
    */


    public static void main(String[] args)
    {
        System.out.println("Enter string: ");
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        //char str2[] = str.toCharArray();
        int i=0;
        while(str.charAt(i) != '\0')
        {
            i++;
        }
        System.out.println("Length = "+ i);
    }

}