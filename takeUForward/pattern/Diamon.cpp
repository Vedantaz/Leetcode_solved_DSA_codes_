// to print diamond like shape 
//    *
//    **    it is in the middle
//   ***

//  write only logic here
#include <bits/stdc++.h>
using namespace std;

void patternUpperDiamond(int n){
    // to print the spaces along with the star in decreasing and increasing order.
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }

        for(int l=0;l<n-i-1;l++){
            cout<<" ";
        }

        cout<<endl;
    }
}
int main(){

    cout<<"Enter the value for n: "<<endl;
    n;
    cin>>n;
    patternUpperDiamond(7);
    return 0;
}