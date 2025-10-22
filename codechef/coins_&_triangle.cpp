#include <iostream>
using namespace std;


float squareRoot(float n)
    {
        /* We are using n itself as initial approximation
          This can definitely be improved */
        float x = n;
        float y = 1;
        float e = 0.000001; /* e decides the accuracy level*/
        while (x - y > e)
        {
            x = (x + y) / 2;
            y = n/x;
        }
        return x;
    }
int findMaximumHeight(int N)
    {
        //  calculating portion inside the square root
        int n = 1 + 8*N;
        int maxH = (-1 + squareRoot(n)) / 2;
        return maxH;
    }
int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    squareRoot(n);
	    findMaximumHeight(n);
	}
    
	return 0;
}
