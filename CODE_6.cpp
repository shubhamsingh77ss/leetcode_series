//this The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
//F(0) = 0, F(1) = 1
//F(n) = F(n - 1) + F(n - 2), for n > 1.
#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int ft = 0, st = 1;
    for (int i = 2; i <= n; i++) {   // start from 2
        int tt = ft + st;
        ft = st;
        st = tt;
    }
    return st;  // return nth term
}

int main() {
    int n;
    cout << "Enter the number to get the Fibonacci term: ";
    cin >> n;

    int fibt = fib(n);
    cout << "The term is = " << fibt << endl;

    return 0;
//TIME COMPLEXITY: O(n)
//SPACE COMPLEXity: O(1)
