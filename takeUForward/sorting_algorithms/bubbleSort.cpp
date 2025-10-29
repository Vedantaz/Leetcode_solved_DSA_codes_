// It always takes an element and place it in correct order. => insertion sort
// Push the max to the last by adjacent swaps. => Bubble sort
// Select minimum's

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
    
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i - 1; j++) {21   
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr, n);
    return 0;

}