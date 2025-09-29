//Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).
#include <iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int>& nums) {
    int firstMax = -1;
    int secondMax = -1;

    for (int i = 0; i < nums.size(); i++) {
        if (firstMax < nums[i]) {
            secondMax = firstMax;
            firstMax = nums[i];
        } else if (secondMax < nums[i]) {
            secondMax = nums[i];
        }
    }

    return (firstMax - 1) * (secondMax - 1);
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size < 2) {
        cout << "Array must have at least 2 elements." << endl;
        return 0;
    }

    vector<int> arr(size);
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int anss = maxProduct(arr);
    cout << "Maximum Product: " << anss << endl;

    return 0;
}
