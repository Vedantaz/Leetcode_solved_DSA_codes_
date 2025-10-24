// GCD of 2 numbers using Euclidean Algorithm
#include <iostream>
using namespace std;    
int gcd(int a, int b) {
    if(b<a){
        swap(b,a);
    }
    while (b != 0) {
        int temp = b;
        b = a % b; // Update b to a mod b
        a = temp;  // Update a to the previous value of b
    }
    return a; // GCD is stored in a
}
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;  
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;
    return 0;       
}
