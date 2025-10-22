#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < 2*n - 1; i++) {           // outer loop → rows
        for (int j = 0; j < 2*n - 1; j++) {       // inner loop → columns
            
            int top = i;
            int bottom = j;
            int right = (2*n - 2) - j;
            int left = (2*n - 2) - i;
            
            cout << (n - min(min(top,bottom), min(left,right))) << " ";
        }
        cout << endl;
    }
      
}

int main()
{   
    int N = 3;
    
    pattern(N);

    return 0;
}