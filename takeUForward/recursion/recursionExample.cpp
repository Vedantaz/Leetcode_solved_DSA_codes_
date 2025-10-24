#include <iostream>
using namespace std;

void printHello(int N)
{
    if (N == 0)
    {
        return; // Exit the function when N reaches 0
    }

    // Print the message
    cout << "Hello, World!" << endl;

    printHello(N - 1); // Call the function again with N reduced by 1
}

int main()
{
    int N;
    cout << "Enter the number of times to print: ";
    cin >> N;

    // Call the recursive function
    printHello(N);

    return 0;
}