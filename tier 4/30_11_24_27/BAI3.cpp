#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bl "BAI3"
using namespace std;
void VO(){
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    VO();
    ll n,k;
    cin >> n >> k;
    ll c = 0,re = 0;
    for(int i = 1 ; i <= n + 1 ; i++){
        ll hn=0;
        if(i <= n) cin >> hn;
        ll cu = min(k,c);
        re += cu;
        ll nsu = k - cu;
        ll moi = min(nsu,hn);
        re += moi;
        c = hn - moi;
    }
    cout << re << el;
    return 0;
}