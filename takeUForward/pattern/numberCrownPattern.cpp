
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void pattern(int n){
        int spaces = 2*(n-1);
      
        for(int l=1;l<=n;l++){
            
            for(int i=1;i<=l;i++){
                cout<<i;
            }
            
            // to print spaces in each row

            for(int j = 1;j<=spaces;j++){
              cout<<" ";
            }

            for(int k=l;k>=1;k--){
                cout<<k;
            }
            cout<<endl;
            // After each iteration nos. increase by 2, thus
            // spaces will decrement by 2.
            spaces-=2;
        }
   
    
}

int main(){
    pattern(6);
    return 0;
}