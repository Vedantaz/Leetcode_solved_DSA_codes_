
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void pattern(int n){
    // to print 101 in series format
    // 1
    // 0 1
    // 1 0 1
    // 1 0 1 1 
    // 0 1 1 0 1
    for(int i=0;i<n;i++){
        // it will be printed as even and odd
        int start=1;

        if(i%2 == 0) start=1;
        else start=0;
        
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;

    }

}

int main(){
    pattern(5);
        return 0;
}