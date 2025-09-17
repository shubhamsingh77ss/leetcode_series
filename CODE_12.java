/*
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
  */
class ss
{
    public static void main(String args[])
    {
        int n=5;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i+1;j++)
            {
                int k=i;
                System.out.print(k+1+" ");
            }
            System.out.println();
        }
    }
}
