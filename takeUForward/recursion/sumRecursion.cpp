#include <iostream>
using namespace std;

int func(int n)
{
    if (n == 0)
        return 0;
    return n + func(n - 1);
}

int factorial(int n)
{
    if (n == 0)
        return 0;
    return n * factorial(n - 1);
}


int main()
{
    int N;
    cout << "Enter a positive integer: ";
    cin >> N;

    int sum = func(N);
    cout << "The sum from 1 to " << N << " is: " << sum << endl;

    return 0;
}