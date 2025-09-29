//Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int>& nums) 
{
        int range=nums.size();
        int actual_sum=(range*(range+1))/2; //-->n(n+1)/2
        //actual sum when the missing term is present in the array
        int current_sum=0;
        for(int i=0;i<range;i++)
        {
            current_sum=current_sum+nums[i];
        }
        int ans=actual_sum-current_sum;
        return ans;
}
int main()
{
    int n;
    cout<<"Enter the array size\n";
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int as=missingNumber(arr);
    cout<<as<<endl;
}
