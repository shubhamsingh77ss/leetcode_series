//The array-form of an integer num is an array representing its digits in left to right order.
//For example, for num = 1321, the array form is [1,3,2,1].
//Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> addToArrayForm(vector<int>& num, int k) {
    vector<int> ans;
    int p = num.size() - 1;
    int carry = 0;

    while (p >= 0 || k > 0) {
        int numval = 0;
        if (p >= 0) {
            numval = num[p];
        }

        int d = k % 10;
        int sum = numval + d + carry;
        int digit = sum % 10;
        carry = sum / 10;

        ans.push_back(digit);

        p--;
        k /= 10;
    }

    if (carry > 0) {
        ans.push_back(carry);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    int as;
    cout << "Enter the array size: ";
    cin >> as;
    vector<int> arr(as);
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < as; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the k number: ";
    cin >> k;

    vector<int> ans1 = addToArrayForm(arr, k);

    cout << "Result: ";
    for (int d : ans1) {
        cout << d;
    }
    cout << endl;
}
