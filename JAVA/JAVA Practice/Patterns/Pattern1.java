import org.omg.CORBA.ORB;

public class Pattern1
{
    public static void main(String[] args)
    {

        /* 

        //Pattern 1
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                System.out.print("* ");
            }
            System.out.println("");
        }

        Output: 
        * * * * * 
        * * * * *
        * * * * *
        * * * * *
        * * * * *

        */




        /*
        
        // Pattern 2
        for(int i=1;i<=5;i++)
        {
            for(int j=0;j<5;j++)
            {
                    System.out.print(i+" "); 
            }
            System.out.println("");
        }

        Output:
        1 1 1 1 1
        2 2 2 2 2
        3 3 3 3 3
        4 4 4 4 4
        5 5 5 5 5
        
        */
        


        /* 
        
        //Pattern 3

        for(int i=0;i<5;i++)
        {
            for(int j=1;j<=5;j++)
            {
                System.out.print(j+" ");
            }
            System.out.println("");
        }

        Output:
        1 2 3 4 5
        1 2 3 4 5
        1 2 3 4 5
        1 2 3 4 5
        1 2 3 4 5
        
        */
        

        
        /*

        //Pattern 4
        char ch='A';
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                System.out.print(ch+" ");
            }
            ch++;
            System.out.println("");
        }

        Output:
        A A A A A
        B B B B B
        C C C C C
        D D D D D
        E E E E E 
        
        */



        /*
         
        // Pattern 5
        for(int i=0;i<5;i++)
        {
            char ch='A';
            for(int j=0;j<5;j++)
            {
                System.out.print(ch+" ");
                ch++;
            }
            System.out.println("");
        }

        Output:
        A B C D E
        A B C D E
        A B C D E
        A B C D E
        A B C D E 

        */


        
        /*
        // Pattern 6
         int var=5;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                System.out.print(var+" ");
            }
            var--;
            System.out.println("");
        }

       // OR

        for(int i=5;i>0;i--)
        {
            for(int j=0;j<5;j++)
            {
                System.out.print(i+" ");
            }
            System.out.println("");
        }

        Output:
        5 5 5 5 5
        4 4 4 4 4
        3 3 3 3 3
        2 2 2 2 2
        1 1 1 1 1

        */


        /*
        
        // Pattern 7
        for(int i=0;i<5;i++)
        {
            for(int j=5;j>0;j--)
            {
                System.out.print(j+" ");
            }
            System.out.println();
        }

        //OR

        for(int i=0;i<5;i++)
        {
            int var=5;
            for(int j=0;j<5;j++)
            {
                System.out.print(var+" ");
                var--;
            }
            System.out.println("");
        }

        Output:
        5 4 3 2 1
        5 4 3 2 1
        5 4 3 2 1
        5 4 3 2 1
        5 4 3 2 1

        */


        /*

         // Pattern 8
        char ch='E';
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                System.out.print(ch+" ");
            }
            ch--;
            System.out.println("");
        }

        Output:
        E E E E E
        D D D D D
        C C C C C
        B B B B B
        A A A A A

        */



        /*

        // Pattern 9
        for(int i=0;i<5;i++)
        {
            char ch='E';
            for(int j=0;j<5;j++)
            {
                System.out.print(ch+" ");
                ch--;
            }
            System.out.println();
        }

        Output:
        E D C B A
        E D C B A
        E D C B A
        E D C B A
        E D C B A

        */


        
        /*

         //Pattern 10
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<=i;j++)
            {
                System.out.print("* ");
            }
            System.out.println("");
        }

        Output:
        *
        * *
        * * * 
        * * * *
        * * * * *

         */



        
    }
}