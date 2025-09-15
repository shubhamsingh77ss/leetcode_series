//THIS PROGRAM IS USED TO FIND THE N-Th TRIBONACCI NUMBER
#include<iostream>
using namespace std;
int trib(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 1;
    int ft=0,st=1,tt=1;
    for(int i=3;i<=n;i++)
    {
        int fot=ft+st+tt;
        ft=st;
        st=tt;
        tt=fot;
    }
    return tt;
}
int main()
{
    int n;
    cout<<"Enter the number to get the tribbonacci term\n";
    cin>>n;
    int tribb=trib(n);
    cout<<"The Term is="<<tribb<<endl;
    return 0;
}
//TIME COMPLEXITY: O(n)
//SPACE COMPLEXITY: O(1)
