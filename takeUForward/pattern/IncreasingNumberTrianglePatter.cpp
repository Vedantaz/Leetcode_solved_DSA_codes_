
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// we have to print like this:
// 1
// 2 3 
// 4 5 6 
// 7 8 9 10

// n = no. of rows o be printed
void pattern(int n){
    int num=1;
    for(int i=1;i<=n;i++){

        for(int j=1;j<i+1;j++){

            // cout<<j<<" "; use to print the numbers starting from 1
            cout<<num<<" ";
            num+=1;

        }
        cout<<endl;
    }
      
    
}

int main(){
    pattern(4);
    return 0;
}