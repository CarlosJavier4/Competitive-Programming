// https://dmoj.uclv.edu.cu/problem/movil

// Segment tree and LCM

#include<bits/stdc++.h>
using namespace std ;

#define int unsigned long long

int n, arr[8];
int tree[33];

int lcm(int a, int b){return (a*b / __gcd(a, b));}

void build(int a[], int v, int tl, int tr) {
    if (tl == tr) {
        tree[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        tree[v] = lcm(tree[v*2], tree[v*2+1]);
    }
}

main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    build(arr, 1, 1, n);
    cout<<tree[1];

}
