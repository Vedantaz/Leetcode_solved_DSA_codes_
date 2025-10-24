// check if it is a palindrome number
#include <iostream>
using namespace std;    
bool isPalindrome(int N) {
    int original = N;
    int reversed = 0;
    while (N != 0) {
        int digit = N % 10; 
        reversed = reversed * 10 + digit;
        N /= 10; 
    }
    return original == reversed; 
}
int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;    
    if (isPalindrome(N)) {
        cout << N << " is a palindrome number." << endl;
    } else {
        cout << N << " is not a palindrome number." << endl;
    }
    return 0;
}

