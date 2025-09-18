//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice.
//You can return the answer in any order.

#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans(2);
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            if(nums[i] + nums[j] == target) {
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
    }
    return {};
}

int main() {
    int n;
    cout << "Enter the size of array\n";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array elements\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target sum\n";
    cin >> target;

    vector<int> res = twoSum(arr, target);
    if(res.empty())
        cout << "No pair found!" << endl;
    else
        cout << "Indices: " << res[0] << " and " << res[1] << endl;
}
