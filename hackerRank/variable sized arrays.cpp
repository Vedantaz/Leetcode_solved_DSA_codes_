
// very IMP and basic question
// question link : https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q;
    cin>>n>>q;
    vector<vector<int>> res(n);
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        res[i].resize(k);
        for(int j=0;j<k;j++){
            cin>>res[i][j];
        }
    }
    for(int i=0;i<q;i++){
        int x,y;
        cin>>x>>y;
        cout<<res[x][y]<<endl;
    }
    return 0;
}
