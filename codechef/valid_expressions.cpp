#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define l1 long long
#define MOD 1000000007;
#define SIZE 1e6+2;
#define endl  "\n" 

void solve(){
    l1 n,x; 
    cin>>n>>x;
    l1 tot = (n+1);
    if((1-n) <= x and x<= (n+1)){
        
    
        if(x<0){
            l1 ms = abs(x)+1;
            l1 mul = n-ms;
            while(ms--) cout<<"-";
            while(mul--) cout<<"*";
            cout<<endl;
            return ;
        }
        if(x>0){
            l1 pl = abs(x)-1;
            l1 mul = n-pl;
            while(pl--) cout<<"+";
            while(mul--) cout<<"*";
            cout<<endl;
            return ;
        }
        if(x>0){
            l1 mul = n-1;
            while(mul--) cout<<"*";
            cout<<"-"<<endl;
            return ;
        }
    }
    cout<<-1<<endl;
    
}
int main() {
    
// 	ios_base::sync_with_stdio(false); cin.tie(0); cout<<.tie(0);
	l1 t; cin>>t;
	while(t--){
	    solve();
	    
	}
	
	return 0;
}
