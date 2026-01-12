import java.util.*;
import java.io.*;
public class ArrayExamples {



    /* 
    //Program 1:
    // Call by reference and call by value
    public static void ArrayUpdate(int marks[],int nonchangable)
    {
        nonchangable=20;
        for(int i=0;i<marks.length;i++)
        {
            marks[i]=marks[i]+1;
        }
        
    }
    public static void main(String[] args)
    {
        int marks[]={87,89,79};
        int nonchangable=10;
        ArrayUpdate(marks,nonchangable);
        
        for(int j=0;j<marks.length;j++)
        {
            System.out.println("Updated Marks in array: "+marks[j]);

            // This shows that array is call by reference means when it is returning from ArrayUpdate() method it is returned changed value which is changed by reference 
        }
        System.out.println("Non Changed variable = "+nonchangable);
        // this shows us call by value means when we are changing this variable value in UpdateArray() method it is not changing
    } 
    */ 






    /*
     
    // Program 2: Linear Search Algorithm
    public static int LinearSearch(int arr[], int key)
    {
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]==key)
            {
                return i;
            }
        }
        return -1;
    }
    public static void main(String[] args)
    {
        int arr[]={4,65,3,64,24,6,8,52};
        int key=52;

        int index=LinearSearch(arr, key);

        if(index==-1)
        {
             System.out.println("Not Found");
        }
        else{
             System.out.println("Key is present at index: "+index);
        }
    }

    */




    /* 
    // Program 3: Largest number in given array
     public static int getLargest(int arr[])
    {
        int largest=Integer.MIN_VALUE;
        int smallest=Integer.MAX_VALUE;

        for(int i=0;i<arr.length;i++)
        {
            if(largest<arr[i])
            {
                largest=arr[i];
            }
            if(smallest>arr[i])
            {
                smallest=arr[i];
            }
        }
        System.out.println("Smallest number from given array is : "+ smallest);
        return largest;
    }
    public static void main(String[] args)
    {
        int arr[] = {4,7,3,5,9,2};
        int LargestNumber = getLargest(arr);

        System.out.println("largest number is from given array is: "+LargestNumber);
    }
    */
    

    

    /*
    // Program 4: Binary search for ascending order array

    public static int binarySearch(int arr[], int key)
    {
        int start=0, end=arr.length-1;

        while(start<=end)
        {
            int mid=(end+start)/2;

            if(arr[mid]==key)
            {
                return mid;
            }
            if(arr[mid]<key)
            {
                start=mid-1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
    public static void main(String[] args)
    {
        int arr[]={4,8,12,16,20,24,28,32,35,37,38};

        int key=35;

        int returnValue=binarySearch(arr,key);

        System.out.println("Index for given key in array is: "+returnValue);


    }
    */




    /*
    //Reverse Number
    public static void reverseArray(int arr[])
    {
        int first=0;
        int last=arr.length-1;
        int temp;
        while(first<last)
        {
            temp=arr[last];
            arr[last]=arr[first];
            arr[first]=temp;

            first++;
            last--;
        }
    }
    public static void main(String[] args)
    {
        int arr[] ={2,4,6,8,10,12,14,16,3,7};

        reverseArray(arr);

        for(int i=0;i<arr.length;i++)
        {
            System.out.print(arr[i]+"  ");
        }
        System.out.println();
    }
    */




    /* 
    //Pairs in array
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
    }
    */



    
    /*//Subarray
    public static void subarray(int arr[])
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
        int arr[]={4,7,2,8,9};

        subarray(arr);
    }*/
    
    

    

    /*
     
                You are given a function,
            int findCount(int arr[], int length, int num, int diff);

            The function accepts an integer array ‘arr’, its length and two integer variables ‘num’ and ‘diff’. Implement this function to find and return the number of elements of ‘arr’ having an absolute difference of less than or equal to ‘diff’ with ‘num’.
            Note: In case there is no element in ‘arr’ whose absolute difference with ‘num’ is less than or equal to ‘diff’, return -1.

            Example:
            Input:

            arr: 12 3 14 56 77 13
            num: 13
            diff: 2
            Output:
            3

            Explanation:
            Elements of ‘arr’ having absolute difference of less than or equal to ‘diff’ i.e. 2 with ‘num’ i.e. 13 are 12, 13 and 14.
     */


            /*
            public static int AbFunction(int arr[],int num, int diff)
            {
                int count=0;
                for(int i=0;i<arr.length;i++)
                {
                    if(Math.abs(num-arr[i])<=diff)
                    {
                        count++;
                    }
                }
                if(count>0)
                {
                    return count;
                }
                else
                    return -1;
            }

            public static void main(String[] args)
            {
                Scanner sc=new Scanner(System.in);
                System.out.println("Enter length of array:");
                int n=sc.nextInt();
                System.out.println("Enter elements of array ");
                int arr[]=new int[n];
                for(int i=0;i<n;i++)
                    arr[i]=sc.nextInt();
                System.out.println("Enter difference: ");
                int diff=sc.nextInt();
                System.out.println("Enter num: ");
                int num=sc.nextInt();
                System.out.println(AbFunction(arr,num,diff));
            }

            */






    
    

}
