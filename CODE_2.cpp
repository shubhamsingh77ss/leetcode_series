//THIS PROGRAM IS ABOUT FINDING THE SECOND LARGEST NUMBER IN AN ARRAY WITHOUT SORTING
#include<iostream>
#include<climits>
using namespace std;
int findSL(int arr[],int n)
{
    if(n<2)
    {
        cout<<"Array must have atleast 2 elements"<<endl;
        return -1;
    }
    int first=INT_MIN,second=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>first)
        {
            second=first;//updated the second largest
            first=arr[i];//updated the largest
        }
        else if(arr[i]>second&&arr[i]!=first)
        {
            second=arr[i];
        }
    }
    if(second==INT_MIN)
    {
        cout<<"NO Second largest element are present all of them are equal"<<endl;
        return -1;
    }
    return second;
}
int main()
{
    int n;
    cout<<"Enter the size of an array ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sl=findSL(arr,n);
    if(sl!=-1)
    {
        cout<<"The second laregest"<<sl<<endl;
    }
    return 0;
}

//TIME COMPLEXITY->O(N)->SINGLE TRAVERSAL
//SPACE COMPLEXITY->O(1)
//HANDLES CASES
//1.ARRAY WITH FEWER THAN 2 ELEMENTS
//2.ALL ELEMENTS EQUAL(NO SECOND LARGEST)
