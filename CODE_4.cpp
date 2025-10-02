//THIS PROGRAM DEALS WITH THE CHECKING THAT GIVEN NUMBER IS A POWER OF 2 OR NOT 
#include<iostream>
using namespace std;
bool ispowerof2(int n)
{
    if(n<1)
    {
        return false;
    }
    else if(n==1)
    {
        return true;
    }
    else
    {
        while(n%2==0)
        {
            n=n/2;
        }
    }
    if(n==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    bool ispow=ispowerof2(n);
    if(ispow==true)
    {
        cout<<"The number is a power of 2\n";
    }
    else
    {
        cout<<"The number is not a power of 2\n";
    }

  //TIME COMPLEXITY : O(LOG N)
  //SPACE COMPLEXITY : O(1)
}
