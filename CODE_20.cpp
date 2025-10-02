 //Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
#include<iostream>
#include<vector>
using namespace std;

vector<int> sortedSquares(vector<int>& nums)
{
    vector<int> ans(nums.size());
    int start=0;
    int end=nums.size()-1;
    int ptr=nums.size()-1;
    while(start<=end)
    {
        int ss=nums[start]*nums[start];
        int es=nums[end]*nums[end];
        if(ss>es)
        {
            ans[ptr]=ss;
            start++;
        }
        else 
        {
            ans[ptr]=es;
            end--;
        }
        ptr--;
    }
    return ans;
}

int main()
{
    int s;
    cout<<"Enter the size of the array\n";
    cin>>s;
    vector<int> arr(s);
    cout<<"Enter the array element\n";
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    vector<int> anss=sortedSquares(arr);
    for(int i=0;i<anss.size();i++)
    {
        cout<<anss[i]<<" ";  // Use << instead of +
    }
    cout<<endl;  // Add newline at the end
    return 0;
}
