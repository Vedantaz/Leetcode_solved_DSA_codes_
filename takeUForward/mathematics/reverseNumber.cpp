// reversing a number except trailing zeroes
#include <iostream>
using namespace std;    
int reverseNumber(int N) {
    int reversed = 0;
    while (N != 0) {
        int digit = N % 10; // Extract the last digit
        reversed = reversed * 10 + digit; // Append it to the reversed number
        N /= 10; // Remove the last digit from N
    }
    return reversed;
}
int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    cout << "Reversed number is: " << reverseNumber(N) << endl;
    return 0;
}

// optimal approach
// #include <iostream>
// using namespace std;

// int main() {
// 	int n;
// 	cin >> n;
// 	int revNum = 0;
// 	while(n > 0){
// 		int ld = n % 10;
// 		revNum = (revNum * 10) + ld;
// 		n = n / 10;
// 	}
// 	cout << revNum;
// }

// tcand sc is similar for both approaches