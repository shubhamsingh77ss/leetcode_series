/* 
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

*/
class ss
{
    public static void main(String args[])
    {
        int n=5;
        for(int i=0;i<n;i++)
        {
            int k=1;
            for(int j=0;j<i+1;j++)
            {
                
                System.out.print(k+" ");
                k++;
            }
            System.out.println();
        }
    }
}
