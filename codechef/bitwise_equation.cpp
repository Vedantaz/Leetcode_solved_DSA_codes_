#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6+2
#define endl "\n"


void solve(){
    ll n; cin>>n;
    if(n==0){
        cout<<1<<" "<<3<<" "<<4<<" "<<5<<endl;
        return;
    }
    if(n==1){
        cout<<1<<" "<<4<<" "<<3<<" "<<2<<endl;
        return;
    }
    if(n==3){
        cout<<8<<" "<<4<<" "<<1<<" "<<2<<endl;
        return;
    }
    if(n==5){
        cout<<8<<" "<<2<<" "<<1<<" "<<4<<endl;
        return;
    }
    if(n%2){
        cout<<2<<" "<<4<<" "<<1<<" "<<n-1<<endl;
        return;
    }
    cout<<2<<" "<<4<<" "<<1<<" "<<n+1<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}