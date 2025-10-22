
#include <bits/stdc++.h>
using namespace std;

void pattern16(int N)
{
     char ch = 'A';
int breakpoint = (2 * i + 1) / 2;
for (int j = 1; j <= 2 * i + 1; j++) {
    cout << ch;
    if (j <= breakpoint)
        ch++;
    else
        ch--;
}

      }
}

int main()
{   
    int N = 5;
    pattern16(N);

    return 0;
}