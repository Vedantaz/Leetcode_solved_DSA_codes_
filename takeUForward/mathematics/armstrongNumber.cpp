// armstrong number program
#include <iostream>
#include <cmath>
using namespace std;    
int countDigits(int N) {
    if (N == 0) return 1; // Special case for 0
    int count = 0;
    while (N != 0) {
        N /= 10;
        count++;
    }
    return count;

}

bool isArmstrong(int N) {
    int original = N;
    int numDigits = countDigits(N);

    // Initialize the sum of digits raised to the power of numDigits
    // int k = to_string(num).length();   // this is the better option to get the length of the number
    
    int sum = 0;    
    while (N != 0) {
        int digit = N % 10; 
        sum += pow(digit, numDigits); 
        N /= 10; 
    }
    return sum == original;
}
int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;    
    if (isArmstrong(N)) {
        cout << N << " is an Armstrong number." << endl;        
    } else {
        cout << N << " is not an Armstrong number." << endl;                    

    }
    return 0;
}