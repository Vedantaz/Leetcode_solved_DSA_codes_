
// reverse the given array using recursion means -> if 4 digits are given then 1st digit will be swapped with 4th digit and 2nd digit will be swapped with 3rd digit.
#include <iostream>
using namespace std;
void reverse(int arr[], int start, int end)
{
    if (start >= end)
        return;
    swap(arr[start], arr[end]);
    reverse(arr, start + 1, end - 1);
}
int main()
{
    int n;
    cin >> n;
    int arr[n] = [ 1, 2, 3, 4, 5 ];
    reverse(arr, 0, n - 1);

    cout << arr << endl;
    return 0;
}