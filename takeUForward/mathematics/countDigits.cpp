// return no of digits inside of N
#include <iostream>
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
int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    cout << "Number of digits in " << N << " is: " << countDigits(N) << endl;
    return 0;
}


/// OPTIMAL APPROACH
// #include <iostream>
// using namespace std;
// int countDigits(int N) {
//     if (N == 0) return 1; // Special case for 0
//     return (int)(log10(n)+1);

    // The expression (int)(log10(n)+1)
    // calculates the number of digits in 'n'
    // and casts it to an integer.
    
    // Adding 1 to the result accounts
    // for the case when 'n' is a power of 10,
    // ensuring that the count is correct.
   
    // Finally, the result is cast
    // to an integer to ensure it is rounded
    // down to the nearest whole number.
// }
// int main() {
//     int N;
//     cout << "Enter a number: ";
//     cin >> N;
//     cout << "Number of digits in " << N << " is: " << countDigits(N) << endl;
//     return 0;
// }    