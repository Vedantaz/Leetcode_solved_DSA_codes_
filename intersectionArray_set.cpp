#include <iostream>
using namespace std;


// wrong solution 
int[] intersection(){
    n1.insert(n1.begin() , n2.begin(), n1.end());
    int n = n1.size();
    vector<int> res;
    sort(n1.begin(), n1.end());
    int i=1, j=0;
    while(n>0){
            j = i-1;
            if (n1[i] == n1[j] && n1[j] != n1[i+1]){
                res[i] = n1[j];
            }
            n--;
            i++;
    }
    return res;
}

int main(){
    
    return 0;
} 
