#include <iostream>
using namespace std;

void printFibonacci(int n, int secondLast = 0, int last = 1, int index = 1) {
    if (n <= 0) return;  
    cout << secondLast << " ";

    if (index < n) {
        printFibonacci(n, last, secondLast + last, index + 1);
    }
}

int main() {
    int n = 5;
    
    cout << "The Fibonacci Series up to " << n << "th term: " << endl;
    
    if (n > 0) {
        printFibonacci(n);
        cout << endl;
    } else {
        cout << "No terms to display." << endl;
    }

    return 0;
}
