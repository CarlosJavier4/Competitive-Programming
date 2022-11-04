//https://dmoj.uclv.edu.cu/problem/itoa

#include<bits/stdc++.h>
using namespace std ;

typedef long long ll;
#define all(x) x.begin(), x.end()
#define ss(x) x.size()
#define rem_dupl(x) sort(all(x)); x.erase(unique(all(x)), x.end())

int n;
string st;
void binario(int n){
    if(!n) return ;
    if(n&1) st += "1";
    else st += '0';
    binario(n>>1);
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        cin>>n;
        st = "";
        binario(n); reverse(all(st));
        cout<<n<<"(2)"<<" = "<<st<<'\n';
    }
}
