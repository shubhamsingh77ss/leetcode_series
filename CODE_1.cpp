//THIS IS ABOUT FINDING THE LARGEST ELEMENT IN AN ARRAY
#include <iostream>
using namespace std;
int findLargest(int arr[], int n) {
    int Largest_Element = arr[0]; 
    for (int i = 1; i < n; i++) {
        if (arr[i] > Largest_Element) {
            Largest_Element = arr[i];
        }
    }
    return Largest_Element;
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int largest = findLargest(arr, n);
    cout << "The largest element in the array is: " << largest << endl;
    return 0;
}
//TIME COMPLEXITY: O(N)
//SPACE COMPLEXITY: O(1)
