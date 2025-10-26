// print n to 1 using recursion 
#include <iostream>
using namespace std;    
void printNto1(int N) {
    // Base case: If N is 0, stop the recursion
    if (N == 0) {
        return;
    }

    // Print the current number
    cout << N << endl;

    // Recursive call with N reduced by 1           
    printNto1(N - 1);
}
int main() {
    int N;
    cout << "Enter a positive integer: ";
    cin >> N;

    // Call the recursive function to print from N to 1
    printNto1(N);

    return 0;
}
