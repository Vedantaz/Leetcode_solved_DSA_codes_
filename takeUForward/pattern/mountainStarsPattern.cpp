
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void pattern(int N){

    // Outer loop for total number of rows
    for (int i = 1; i <= 2 * N - 1; i++) {

        // Number of stars for the current row
        int stars;
        if (i <= N)
            stars = i;           // Increasing part
        else
            stars = 2 * N - i;   // Decreasing part

        // Inner loop to print stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        // Move to the next line after printing all stars of this row
        cout << endl;
    }
}
int main(){
    int n=5;
    pattern(n);
    return 0;
}