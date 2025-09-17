/*
*
**
***
****      *
************
****      *
***
**
*
*/
class ss
{
    public static void main(String args[])
    {
        int n=5;
        //first pattern
        for(int  i=0;i<n-2;i++)
        {
            for(int j=0;j<i+1;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
         //second pattern
        System.out.print("*".repeat(n-1));
        System.out.print(" ".repeat(n+1));
        System.out.println("*");
        //third pattern
        System.out.println("*".repeat(n*2+2));
        //fourth pattern
        System.out.print("*".repeat(n-1));
        System.out.print(" ".repeat(n+1));
        System.out.println("*");
        //fifth pattern
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-2;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
