// https://dmoj.uclv.edu.cu/problem/fibonacci

#include<bits/stdc++.h>
using namespace std ;
#define mod 1000000007
unsigned long long m[1001][1001];

unsigned long long fib(int x, int y) {
    if(m[x][y] != 0) return m[x][y];
    if(x == 0 || y == 0)
        return 1;
    else {
        m[x][y] = ((fib(x-1, y) % mod) + (fib(x, y-1) % mod) + (fib(x-1, y-1) % mod)) % mod;
    }
    return m[x][y];
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while(t) {

        int a, b;
        cin>>a>>b;
        cout<<fib(a, b)<<"\n";

        --t;
    }

    return 0;
}

