#include <iostream>
using namespace std;

int main(){
    sort(n1.begin(), n1.end());
    sort(n2.begin(), n2.end());
    int n = n1.size();
    int m = n2.size();
    vector <int> res;
    int i=0, j=0;
    while(i<n && j<m){
           if(n1[i]>n2[j])j++;
           else if(n1[i]<n2[j])i++;
           else{
               res.insert(res.begin(), n1[i]);
               i++;
               j++;
           };
    }
    return res;
}