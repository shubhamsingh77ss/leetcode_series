// THIS PROGRAM IS ABOUT CHECKING THE GIVEN NUMBER IS PALINDROME OR NOT 
#include <iostream>
using namespace std;

long findpalindrome(int x) {
    if (x < 0) {
        return -1; // indicate invalid (negative numbers not palindromes)
    }

    int n = x;
    long revNum = 0;
    while (n > 0) {
        int d = n % 10;
        revNum = revNum * 10 + d;
        n /= 10;
    }
    return revNum;
}

int main() {
    int n;
    cout << "Enter the number to be checked: ";
    cin >> n;

    long pal = findpalindrome(n);

    if (pal == -1) {
        cout << "NOT A PALINDROME NUMBER (negative input)\n";
    } else if (pal == n) {
        cout << "PALINDROME\n";
    } else {
        cout << "Not a palindrome\n";
    }

    return 0;
}


//TIME COMPLEXITY: O(LOG N)
//SPACE COMPLEXITY: O(1)
