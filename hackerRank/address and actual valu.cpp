#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void update(int *a, int *b){
    int sum = *a+*b;
    int diff = abs(*a-*b);
    *a = sum;
    *b = diff;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b;
    int *pa = &a, *pb = &b;
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<endl<<b<<endl;
    return 0;
}


// / inputs
// a,b are the inputs e.g a=5,b=4
// answer should be a = a+b , b = abs(a-b) but no more element, just chnage the actual value of a and b using address and actual value

// input
4
5

// output
9
1