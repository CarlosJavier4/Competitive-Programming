// https://dmoj.uclv.edu.cu/problem/digitlast

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll binpow(ll a, ll b){
    a %= 10;
    ll res = 1;
    while(b>0){
        if(b&1) res = res * a % 10;
        a = a * a % 10;
        b >>= 1;
    }
    return res;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    for(int i=1;i<=n;i++){
        int a, b; cin>>a>>b;
        cout<<binpow(a, b)%10<<"\n";
    }


    return 0;
}
