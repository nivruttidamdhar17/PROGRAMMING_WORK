import java.util.*;
import java.io.*;
import java.lang.Math;
public class AccentureCode1{

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

     /*
    public static void differenceOfSum(int m, int n)
    {
        int sumOfDivisibles=0;
        int notDivisible=0;
        for(int i=1;i<=n;i++)
        {
            if(i%m==0)
            {
                sumOfDivisibles = sumOfDivisibles + i;
            }
            else
            {
                notDivisible = notDivisible + i;
            }   
        }
        System.out.println("Output is: "+ (notDivisible-sumOfDivisibles));

    }
    public static void main(String[] args)
    {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter value of m and n: ");
        int n=sc.nextInt();
        int m= sc.nextInt();

        differenceOfSum(m,n);

    }
    */




    // 

            /*
             *      The function takes an integral arr which is of the size or length of its arguments. Return the sum of the second smallest element at odd position ‘arr’ and the second largest element at the even position.
                    Assumption
                    Every array element is unique.
                    Array is 0 indexed.
                    Note:
                    If the array is empty, return 0.
                    If array length is 3 or <3, return 0.
                    Example
                    Input:
                    Arr: 3 2 1 7 5 4
                    Output:
                    7
             */

        /* 
        public static void largeSmallSum(int arr[])
        {
            ArrayList<Integer>even=new ArrayList<Integer>();
            ArrayList<Integer>odd=new ArrayList<Integer>();
            
            even.add(arr[0]);
            for(int i=1;i<arr.length;i++)
            {
                if(i%2==0)
                {
                    even.add(arr[i]);
                }
                else{
                    odd.add(arr[i]);
                }
            }
            Collections.sort(even);

            Collections.sort(odd);

            System.out.println("Sum of second largest element at even position and second smallest element at odd position is: "+(even.get(even.size()-2)+odd.get(1)));
        }
        public static void main(String[] args)
        {
            Scanner sc= new Scanner(System.in);
            System.out.println("Enter size of array: ");
            int n=sc.nextInt();
            System.out.println("Enter elements in array and that element should be unique: ");
            int arr[]=new int[n];
            for(int i=0;i<n;i++)
            {
                arr[i] = sc.nextInt();
            }
            largeSmallSum(arr);
        }
        */
    
    




        /*
        // Anagrams

        public static void isAnagram(String str1, String str2)
        {
            if(str1.length()==str2.length())
            {
                char ch1[]=str1.toCharArray();
               
                char ch2[]=str2.toCharArray();

                Arrays.sort(ch1);
                System.out.println(ch1);
                Arrays.sort(ch2);
                System.out.println(ch2);

                //boolean result=Arrays.equals(ch1, ch2);
                if(Arrays.equals(ch1,ch2))
                {
                    System.out.println("Yes");
                }
                else{
                    System.out.println("No");
                }
            }
        }
        public static void main(String[] args)
        {
            Scanner sc= new Scanner(System.in);
            String str1=sc.nextLine();
            String str2=sc.nextLine();

            isAnagram(str1, str2);
        }

        */





        /*          
        public static int productSmallPair(int sum, int arr[])
        {   
             if(arr.length<2)
             {
                return -1;
             }
            
            Arrays.sort(arr);
            if(arr[0]+arr[1]<sum)
            {
                return arr[0]*arr[1];
            }
            else
            {
                return 0;
            }

        }
        public static void main(String[] args)
        {
            int arr[]={5,4,2,3,9,1,7};
            int sum=9;
            System.out.println(productSmallPair(sum, arr));
        }
     
        */








            /*
                //Problem 6 :
                * When the sum of the digits exceeds a total of 9, a carry digit is added to the right-left of the digit. Execute the function: Int Numberofcarry(Integer num 1, Integer num 2)

                Assumption

                num1, num2 > = 0

                Example

                Input:
                num1: 451
                num2: 349

                Output:
                2
                */
        /*
        public static void Numberofcarry(int num1, int num2)
        {
            int var=0;
            int d1=0;
            int d2=0;
            while(num1>0 && num2>0)
            {
                d1=num1%10;
                d2=num2%10;
                num1=num1/10;
                num2=num2/10;
                if(d1+d2>9)
                {
                    var++;
                    num1++;      //or num2++;
                }
            }
            System.out.println("Number of times carry found: "+var);
        }
        public static void main(String[] args)
        {
            Scanner sc= new Scanner(System.in);
            System.out.println("Enter number 1: ");
            int num1=sc.nextInt();
            System.out.println("Enter number 2: ");
            int num2=sc.nextInt();
            Numberofcarry(num1,num2);
        }
        */





        /*
        public static void ReplaceCharacter(String str, char ch1, char ch2)
        {
            char ch3[]=str.toCharArray();

            for(int i=0;i<str.length();i++)
            {
                if(ch3[i]==ch1)
                {
                    ch3[i]=ch2;
                }
                else if(ch3[i]==ch2)
                {
                    ch3[i]=ch1;
                }   
            }
            System.out.println(ch3);
        }
        public static void main(String[] args)
        {
            Scanner sc=new Scanner(System.in);
            System.out.println("Enter String and two characters to replace them: ");
            String str=sc.nextLine();
            char ch1=sc.next().charAt(0);
            char ch2=sc.next().charAt(0); 
            ReplaceCharacter(str, ch1, ch2);   
        }
        */



        /* 
        public static int operationchoices(int a, int b, int Choice )
        {
            int n=0;
            switch(Choice)
            {
                case 1:n=a+b;
                break;

                case 2:n=a-b;
                break;

                case 3:n=a*b;
                break;

                case 4:n=a/b;
                break;

                default:

            }
            return n;
        }
        public static void main(String[] args)
        {
            Scanner sc=new Scanner(System.in);
            System.out.println("Enter two numbers : ");
            int a=sc.nextInt();
            int b=sc.nextInt();
            System.out.println("Enter choice to perform operation: \n1)Addition\n2)Subtraction\n3)Multiplication\n4)Division:\n ");
            int Choice=sc.nextInt();
            System.out.println("Output is: "+operationchoices(a,b,Choice));
        }

        */




        /*
        public static int calculations(int num1, int num2)
        {
            int result=0;
            if(num1<num2)
            {
                for(int i=num1;i<=num2;i++)
                {
                    if(i%3==0 && i%5==0)
                    {
                        result=result+i;
                    }
                }
            }
            return result;
        }
        public static void main(String[] args)
        {
            Scanner sc=new Scanner(System.in);
            System.out.println("Enter two numbers from which we have to find additon of nunbers which are divisible by 3 and 5: ");
            int num1=sc.nextInt();
            int num2=sc.nextInt();
            System.out.println("Sum of between numbers which are divisible 3 and 5 : "+ calculations(num1,num2));
        }
         */



        /*
        public static void SortingFunction(int arr[])
        {
            ArrayList<Integer>even=new ArrayList<Integer>();
            ArrayList<Integer>odd=new ArrayList<Integer>();
            even.add(arr[0]);
            for(int i=1;i<arr.length;i++)
            {
                if(i%2==0)
                {
                    even.add(arr[i]);
                }
                else{
                    odd.add(arr[i]);
                }
            }
            Collections.sort(even);
            Collections.sort(odd);
            System.out.println("Even array is: "+even);
            System.out.println("Odd array is : "+odd);
            System.out.println("Sum of second largest number from both even and odd matrices is: "+(even.get(even.size()-2)+odd.get(odd.size()-2)));

        }
        public static void main(String[] args)
        {
            Scanner sc=new Scanner(System.in);
            System.out.println("Enter size of array: ");
            int size=sc.nextInt();
            int arr[]=new int[size];
            for(int i=0;i<size;i++)
            {
                System.out.println("Element at " +i+" index: ");
                arr[i]=sc.nextInt();
            }
            SortingFunction(arr);
        }
        */




       



        /*
        public static void CheckPassword(String str)
        {
            boolean flag1=false;
            boolean flag2=false;
            boolean flag3=true;
            boolean flag4=true;
            if(str.length()>=4)
            {
                for(int i=0;i<str.length();i++)
                {
                    if(str.charAt(i) >'0'&& str.charAt(i)<'9')
                    {
                        flag1=true;  
                    }
                    if(str.charAt(i)>'A'&&str.charAt(i)<'Z')
                    {
                        flag2=true;
                    }
                    if(str.charAt(i)==' '&&str.charAt(i)=='/')
                    {
                        flag3=false;
                    }
                }
                if(str.charAt(0)>='0'&&str.charAt(0)<='9')
                {
                    flag4=false;
                }
            }
            if(flag1==true && flag2==true && flag3==true && flag4==true)
            {
                System.out.println("1");
            }
        }
        public static void main(String[] args)
        {
            String str="aA1_67";
            CheckPassword(str);
        }
        */



        /*
        public static void MaxInArray(int arr[],int index)
        {
            int max=Integer.MIN_VALUE;
            for(int i=0;i<arr.length;i++)
            {
                if(arr[i]>max)
                {
                    max=arr[i];
                    index=i;
                }
            }
            System.out.println("The maximum element is "+max+" and the index in array is "+index);
        }
        public static void main(String[] args)
        {
            Scanner sc= new Scanner(System.in);

            int index=Integer.MIN_VALUE;
            int arr[]={23,45,82,27,66,12,78,13,71,86};
            MaxInArray(arr, index);
        }
        */








             /*The function to execute is
                ChatFrequentcharacter(Char str, char x)

                This function has a string and a character. This function requires replacing the most used character in the str with the ‘x’ character.

                Note: If two characters have the same frequency, then we will have to consider the frequency which has the lower ASCII value.

                Example

                Input:
                str: bbadbbababb
                char x: t

                Output:
                ttadttatatt
                */





            /*  //PROGRAM 1
            public static void ChangeFrequentCharacters(String str,char ch)
            {
                char c=' ';
                char ch1[]=str.toCharArray();
                int count=0, count2;

                for(int i=0;i<ch1.length;i++)
                {
                    count2=0;
                    for(int j=0;j<ch1.length;j++)
                    {
                        if(ch1[i]==ch1[j])
                        {
                            count2++;
                        }
                    }
                    if(count2>count)
                    {
                        count=count2;
                        c=ch1[i];
                    }
                    
                }
                System.out.println(str.replace(c,ch));
                
            }
            public static void main(String[] args)
            {
                
                Scanner sc=new Scanner(System.in);
                System.out.println("Enter String which contain multiple same characters: ");
                String str=sc.nextLine();
                System.out.println("Enter character to replace in given string: ");
                char ch=sc.next().charAt(0);
                ChangeFrequentCharacters(str, ch);
            }
            */




            /* //PROGRAM 2
                public static void main(String[] args) {
                    String str = "bbbbooooxxyy";
                    char x = 't';
                    String result = ChatFrequentcharacter(str, x);
                    System.out.println(result);
                }
            
                public static String ChatFrequentcharacter(String str, char x) {
                    HashMap<Character, Integer> charFrequency = new HashMap<>();
            
                    // Calculate character frequencies
                    for (char c : str.toCharArray()) {
                        charFrequency.put(c, charFrequency.getOrDefault(c, 0) + 1);
                    }
            
                    char mostFrequentChar = '\0';
                    int maxFrequency = 0;
            
                    // Find the most frequent character with the lowest ASCII value
                    for (char c : str.toCharArray()) {
                        if (charFrequency.get(c) > maxFrequency ||
                            (charFrequency.get(c) == maxFrequency && c < mostFrequentChar)) {
                            mostFrequentChar = c;
                            maxFrequency = charFrequency.get(c);
                        }
                    }
            
                    // Replace the most frequent character with 'x'
                    StringBuilder result = new StringBuilder();
                    for (char c : str.toCharArray()) {
                        if (c == mostFrequentChar) {
                            result.append(x);
                        } else {
                            result.append(c);
                        }
                    }
            
                    return result.toString();
                }
             */
            
        





            // AutoBiographical number
            
                /*The function accepts the string n. It checks whether the number is an autobiographical number or not. If an integer returns, then it is an autobiographical number. If 0 returns, then it is not an autobiographical number.

                Assumption

                The input value should not be more than 10 characters.
                The input string will have numeric characters.
                Explanation
                The 0th position has the number 1, the 1st position has the number 2, the 2nd position has the number 1, and the 3rd position has number 0. Hence, it is an autobiographical number.

                The count of autobiographical numbers in the input is 3, hence 3 is returned.

                */


            /*
            public static void Autobiographical_Num(int num)
            {
                int d=0;
                int num2=0;
                int count=0;
                while(num>0)
                {
                    d=num%10;
                    num=num/10;
                    count++;
                    num2=num2+d;
                }

                if(count==num2)
                {
                    System.out.println("Given Number is autobiographical");
                }
                else
                    System.out.println("Number is not autobiographical");
            }
            public static void main(String[] args)
            {
                    Scanner sc=new Scanner(System.in);
                    System.out.println("Enter number: ");
                    int num=sc.nextInt();
                    Autobiographical_Num(num);
            }
            */






            /*
             Write a function mergeArrays which merges two sorted arrays to create one single sorted array. Complete the function int* mergeArrays(int a[], int b[], int asize, int bsize) below which takes the pointers to the first element of the two sorted arrays and the size of the arrays, and returns the base address of the final sorted array.

            Input:
            4 // Size of 1st array
            1 2 3 6 // Elements of 1st array
            3 // Size of 2nd array
            4 5 7 // Elements of 2nd array

            Output:
            1
            2
            3
            4
            5
            6
            7
             */


             /*
            public static void mergeArrays(int arr1[], int arr2[], int arr3[],int num1,int num2, int num3)
            {
                
                for(int i=0;i<num1;i++)
                {
                    arr3[i]=arr1[i];
                    
                }
                int i=0;
                for(int j=num1;j<num3;j++)
                {
                    arr3[j]=arr2[i];
                    i++;
                }

                Arrays.sort(arr3);
                System.out.println("Sorted array is : ");
                for(int k=0;k<num3;k++)
                {
                    System.out.println(arr3[k]);
                }
                
            }

            public static void main(String[] args)
            {
                Scanner sc=new Scanner(System.in);
                System.out.println("Enter size of 1st array: ");
                int num1=sc.nextInt();
                System.out.println("Enter elements of 1st array: ");
                int arr1[]=new int[num1];
                for(int i=0;i<num1;i++)
                {
                    arr1[i]=sc.nextInt();
                }
                

                System.out.println("Enter size of 2nd array: ");
                int num2=sc.nextInt();
                System.out.println("Enter elements of 2nd array: ");
                int arr2[]=new int[num2];
                for(int j=0;j<num2;j++)
                {
                     arr2[j]=sc.nextInt();
                }
                    

                int num3= num1+num2;
                int arr3[]=new int[num3];

                mergeArrays(arr1,arr2,arr3,num1,num2,num3);

            }
             */




            

            /*
             Create web access management to the kth largest number. It will accept an integer k and an array arr as its conditions and has to return the greatest element based on the value of k. That is, if k = 0, return the greatest element. If k = 1, return the second greatest element, and so on.
            Example

            Suppose the array contains values like {74, 85, 102, 99, 101, 56, 84} and the integer k is 2. The method will return 99, the third greatest element, as there are only two (according to the value of k) values greater than 99 (101 and 102).
             */

            /* 
            public static void WebAccessManagement(int arr[],int num1,int k)
            {
                    int num2=0;
                    Arrays.sort(arr);
                    if(k<=arr.length)
                    {   
                        num2=arr[arr.length-k-1];
                    }
                    System.out.println("number is : "+num2);
            }
             public static void main(String[] args)
             {
                Scanner sc=new Scanner(System.in);
                System.out.println("Enter value of k: ");
                int k=sc.nextInt();
                System.out.println("Enter size of array: ");
                int num1=sc.nextInt();
                System.out.println("Enter elements of array: ");
                int arr[]=new int[num1];
                for(int i=0;i<num1;i++)
                {
                    arr[i]=sc.nextInt();
                }
                WebAccessManagement(arr,num1,k);
             }
             */


             


             /*
              *Form an array of 1000 integers and find out the second-largest number. If there is no second largest number, return the value to –1.
                Example
                Input 1:
                3
                Input 2:
                {2,1,2}
                Output:
                1
                Explanation
                The integer 1 is the second largest in the array.
                Example
                Input 1:
                5
                Input 2:
                {4,7,9,8,0}
                Output:
                8
              */
             /*
             public static int SecLargestFinder(int arr[])
             {
                int size=arr.length;
                Arrays.sort(arr);
                for(int i=size-2;i>=0;i--)
                {
                    if(arr[i] != arr[i+1])
                    {
                        System.out.println("Second largest element is: ");
                        return arr[i];
                    }
                }
                return 1;
             }
            public static void main(String[] args)
            {
                int n=0;
                Scanner sc=new Scanner(System.in);
                System.out.println("Enter size of array: ");
                int num=sc.nextInt();
                int arr[] =new int[1000];
                System.out.println("Enter elements in array: ");
                for(int i=0;i<num;i++)
                {
                    arr[i]=sc.nextInt();
                }
                System.out.println(SecLargestFinder(arr));
            }
            */





            /*
            //program for fibonacci series
            public static void FibonacciSeries(int num)
            {
                int num1=0;
                int num2=1;
                int num3;
                int arr[]=new int[num];
                arr[0]=0;
                arr[1]=1;
                for(int i=2;i<num;i++)
                {

                    num3=num1+num2;
                    num1=num2;
                    num2=num3;
                    arr[i]=num3;
                }
                for(int i=0;i<num;i++)
                {
                    System.out.print(arr[i]+" ");
                }
            }
            public static void main(String[] args)
            {
                
                Scanner sc=new Scanner(System.in);
                System.out.println("Enter upto how many number of iterations you want to get series: ");
                int num=sc.nextInt();
                FibonacciSeries(num);
            }

            */






            /*
            // Prime number program in java
            public static void PrimeNumberCalc(int num)
            {
                
                boolean flag=false;
                System.out.println("2 is a prime number");
                int num1=3;
                int count=0;
                while(count<num-1)
                {
                    for(int i=2;i<num1/2;i++)
                    {
                        if(num1%i==0)
                        {
                            flag=true;
                            break;
                        }
                        else if(num1%i != 0)
                        {
                            flag=false;
                            
                        }
                    }
                    if(flag==false)
                    {
                        System.out.println(num1+" is a prime number");
                        count++;
                    }
                    num1++;
                }
            }
            public static void main(String[] args)
            {
                Scanner sc=new Scanner(System.in);
                System.out.println("Enter how many prime numbers you want to calculate: ");
                int num= sc.nextInt();
                PrimeNumberCalc(num);
            }
            */





            /*
            //Palindrome number
            public static void PalindromeNumber(int num)
            {
                int temp=num;
                int d=0;
                int sum=0;
                while(num>0)
                {
                    d=num%10;
                    sum=(sum*10)+d;
                    num=num/10;
                }
                System.out.println(d);
                System.out.println(sum);
                System.out.println(num);
                if(sum==temp)
                {
                    System.out.println("Given number is palindrome");
                }
                else
                {
                    System.out.println("Given number is not palindrome");
                }
            }
            public static void main(String[] args)
            {
                Scanner sc=new Scanner(System.in);
                System.out.println("Enter number to find whether it is palindrome: ");
                int num=sc.nextInt();
                PalindromeNumber(num);
            }
            */







            /*
            // Program for Armstrong number
            public static void ArmstrongNumber(int num)
            {
                int temp=num;
                int sum=0;
                int d=0;
                while(num>0)
                {
                    d=num%10;
                    num=num/10;
                    sum=sum+d*d*d;
                }
                if(temp==sum)
                {
                    System.out.println("Given number is Armstrong number");
                }
                else{
                     System.out.println("Given number is not Armstrong number");
                }
            }
            public static void main(String[] args)
            {
                Scanner sc=new Scanner(System.in);
                System.out.println("Enter number to find whether it is Armstrong number : ");
                int num=sc.nextInt();
                ArmstrongNumber(num);
            }
            */





            /*
            public static void ReverseNumber(int num)
            {
                int d=0;
                int rev=0;
                while (num>0) 
                {
                    d=num%10;
                    num=num/10;
                    rev=rev*10+d;
                }
                
                System.out.println("Reverse number is : "+rev);
                
            }
            public static void main(String[] args)
            {
                Scanner sc=new Scanner(System.in);
                System.out.println("Enter number to reverse it : ");
                int num=sc.nextInt();
                ReverseNumber(num);
            }
            */



            


            /*
            //Program to check if the given number is happy number
            public static int HappyNumber(int num)
            {
                int d=0;
                int sum=0;
                while(num>0)
                {
                    d=num%10;
                    sum=sum+(d*d);
                    num=num/10;
                }
                return sum;
            }
            //Cheking for Happy number
            public static void main(String[] args)
            {
                Scanner sc=new Scanner(System.in);
                System.out.println("Enter number to check whether it is happy number : ");
                int num=sc.nextInt();
                int result=num;
                
                while(result != 1 && result != 4)
                {
                    result = HappyNumber(result);
                }

                if(result==1)
                {
                    System.out.println("Given number is Happy number");
                }
                if(result==4)
                {
                    System.out.println("Given number is not happy number");
                }
            }
            */



            /* 
            // Program to check is given number is happy-
            public static int happyNumber(int num)
            {   int d=0;
                int num2=0;
                while(num>0)
                {
                    d=num%10;
                    num2=num2+(d*d);
                    num=num/10;
                }
                return num2;
            }
            public static void main(String[] args)
            {
                Scanner sc=new Scanner(System.in);
                System.out.println("Enter number to check is it happy number: ");
                int num=sc.nextInt();

                while(num !=1 && num != 4)
                {
                    num=happyNumber(num);
                }

                if(num==1)
                {
                    System.out.println("Given number is happy");
                }
                if(num==4)
                {
                    System.out.println("Given number is not happy");
                }
            }
            */





            
            /*public static int happyNumber(int num)
            {
                int d=0;
                int num2=0;

                while(num>0)
                {
                    d=num%10;
                    num2=num2+(d*d);
                    num=num/10;
                }
                return num2;
            }
            public static void main(String[] args)
            {
                Scanner sc=new Scanner(System.in);
                System.out.println("Enter number to find is it happy or not: ");
                int num=sc.nextInt();

                while(num!=1 && num!=4)
                {
                    num=happyNumber(num);
                    //System.out.println("number is : "+num);
                }

                if(num==1)
                {
                    System.out.println("Number is happy number");

                }
                if(num==4)
                {
                    System.out.println("Number is not happy");
                }
            }*/
            




            /* 
            public static void main(String[] args)
            {
                    Scanner sc = new Scanner(System.in);
                    System.out.println("Enter the string: ");
                    String str=sc.nextLine();
                    String str2[] = str.split(" ");
                    String ans = "";
                    for (int i = str2.length - 1; i >= 0; i--) 
                    {
                        ans = ans+ str2[i] + " ";
                    }
                    System.out.println(ans);
            }
            */






            /* 
            public static int operationsBinaryString (String str)
            {
                if(str==null)
                {
                    return -1;
                }

                int res = str.charAt(0)-'0';

                for(int i=1;i<str.length()-1;)
                {
                    int prev=str.charAt(i);
                    i++;

                    if(prev=='A'||prev=='a')
                    {
                        res=res&str.charAt(i)-'0';
                    }
                    else if(prev=='B'||prev=='b')
                    {
                        res=res|str.charAt(i)-'0';
                    }
                    else
                    {
                        res=res^str.charAt(i)-'0';
                    }
                    i++;
                }
                return res;
            }
            public static void main (String[]args)
            {
                Scanner sc = new Scanner (System.in);
                System.out.println("Enter the string to perform binary operations: ");
                String str = sc.nextLine();
                System.out.println (operationsBinaryString (str));
            }
            */




            /* 
            public static void ReverseString(String str)
            {
                String str2[] = str.split(" ");
                String ans="";
                for(int i=str2.length-1;i>=0;i--)
                {
                    ans=ans+str2[i]+" ";
                }
                System.out.println(ans);

            }
            public static void main(String[] args)
            {
                Scanner sc = new Scanner (System.in);
                System.out.println("Enter the string to reverse the string having same words: ");
                String str = sc.nextLine();
                ReverseString(str);
            }
            */



            

            /* 
            // Automrphic number checking i.e. if 5 is given number then if we take square of 5 is 25 then last digit of square should be same as given number.
            public static int isAutomorphic(int num)
            {
                int sq=num*num;
                while(num!=0)
                {
                    if(num%10 != sq%10)
                    {
                        return 0;
                    }
                    num=num/10;
                    sq=sq/10;
                }
                return 1;
            }
            public static void main(String[] args)
            {
                Scanner sc= new Scanner(System.in);
                System.out.println("Enter number to check is it automorphic: ");
                int num=sc.nextInt();

                if((isAutomorphic(num))==1)
                {
                    System.out.println("Given Number "+num+" and its square "+ num*num+ " are automorphic");
                }
                else
                    System.out.println("Given Number "+num+" and its square "+ num*num+ " are not automorphic");
            }
            */




            /* 
            public static void largeSmallSum(int arr[])
            {
                ArrayList<Integer>even=new ArrayList<Integer>();
                ArrayList<Integer>odd=new ArrayList<Integer>();

                even.add(arr[0]);
                for(int i=0;i<arr.length;i++)
                {
                    if(i%2==0)
                    {
                        even.add(arr[i]);
                    }
                    else{
                        odd.add(arr[i]);
                    }
                }
                
                Collections.sort(even);
                Collections.sort(odd);

                System.out.println("Sum is "+ (even.get(even.size()-2)+odd.get(1)));
            }
            public static void main(String[] args)
            {
                Scanner sc=new Scanner(System.in);
                System.out.println("Enter size of array: ");
                int size=sc.nextInt();
                System.out.println("Enter elements of array of size: "+size+ "an all elements should be unique");
                int arr[]=new int[size];
                for(int i=0;i<size;i++)
                {
                    arr[i]=sc.nextInt();
                }
                largeSmallSum(arr);
            }
            */





            /* //Reverse number
            public static void main(String[] args)
            {
                int num=12345;
                int d=0;
                int rev=0;
                while(num!=0)
                {
                    d=num%10;
                    rev=(rev*10)+d;
                    num=num/10;
                }
                System.out.println(rev);
            }
            */



            /* // Armstrong number
            public static void main(String[] args)
            {
                int num=153;
                int d=0;
                int temp=num;
                int num2=0;
                while(num!=0)
                {
                    d=num%10;
                    num2=num2+(d*d*d);
                    num=num/10;
                }
                if(num2==temp)
                {
                    System.out.println("Given number is armstrong");
                }
                else {
                    System.out.println("Number is not armstrong number");
                }
            }
            */



            /* 
            //Palindrome number
            public static void main(String[] args)
            {
                int num=1551;
                int d=0;
                int temp=num;
                int num2=0;
                while(num!=0)
                {
                    d=num%10;
                    num2=num2*10+d;
                    num=num/10;
                }
                if(num2==temp)
                {
                    System.out.println("Given number is palindrome ");
                }
                else{
                    System.out.println("It is not palindrome ");
                }
            }
            */

            /* 
            Input: myNameIsNivrutti
            Output: MY
                    nAME
                    iS
                    nIVRUTTI
            */
            /* 
            public static void StringConvertFunction(String str)
            {
                for(int i=0;i<str.length();i++)
                {
                    if(str.charAt(i)>='A'&&str.charAt(i)<='Z')
                    {
                        System.out.println();
                        System.out.print(Character.toLowerCase(str.charAt(i)));
                    }
                    else
                        System.out.print(Character.toUpperCase(str.charAt(i)));
                }
            }
            public static void main(String[] args)
            {
                    Scanner sc=new Scanner(System.in);
                    System.out.println("Enter the string : ");
                    String str = sc.nextLine();
                    StringConvertFunction(str);
            }

            */
            






            /*public static void StringOperation(String str)
            {
                char ch[]=str.toCharArray();
                for(int i=0;i<ch.length/2;)
                {
                    for(int j=ch.length-1;j>=ch.length/2;)
                    {
                        if(ch[i]==ch[j])
                        {
                            System.out.println("Character is same");
                            i++;
                            j--;
                            
                        }
                        else{
                            System.out.println("Characters are not same");
                            i++;
                            j--;
                            
                        }
                    }
                }
            }
            public static void main(String[] args)
            {
                String str= new String("malayalam");
                StringOperation(str);
            }*/

}
