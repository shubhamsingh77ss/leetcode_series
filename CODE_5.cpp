//THIS PROGRAM IS JUST TO CHECK THE GIVEN NUMBER IS POWER OF 3 OR NOT 
#include<iostream>
using namespace std;
bool ispowerof3(int n)
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
        while(n%3==0)
        {
            n=n/3;
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
    bool ispow=ispowerof3(n);
    if(ispow==true)
    {
        cout<<"The number is a power of 3\n";
    }
    else
    {
        cout<<"The number is not a power of 3\n";
    }

  //TIME COMPLEXITY : O(LOG N)
  //SPACE COMPLEXITY : O(1)
}
