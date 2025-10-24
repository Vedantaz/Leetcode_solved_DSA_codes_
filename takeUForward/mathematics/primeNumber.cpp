#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool checkPrimse(int n)
{

    if (n <= 1)
        return false; // 0 and 1 are not prime
    if (n == 2)
        return true; // 2 is the smallest prime number

    if (n % 2 == 0)
        return false; // eliminate even numbers greater than 2

    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (checkPrimse(n))
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}