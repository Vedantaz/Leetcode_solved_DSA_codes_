#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout<<"Enter the n: "<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter the number from 1 to 5: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cout<<"Enter the q: "<<endl;
    cin >> q;
    while (q--) {
        int number;
        cout<<"Enter the number here: "<<endl;
        cin >> number;
        cout << hash[number] << endl;
        cout << hash[number - 'a'] << endl;
    }
    return 0;
}