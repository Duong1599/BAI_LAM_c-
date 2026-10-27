#include <bits/stdc++.h>
#define ll long long
#define vo "SUMDIG"
#define el "\n"
#define fi first
#define se second
using namespace std;
void bl (){
    freopen(vo".INP","r",stdin);
    freopen(vo".OUT","w",stdout);
}
ll sum(ll a){
    int re = 0;
    while(a > 0){
        re += a % 10;
        a /= 10;
    }
    return re;
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    //bl();
    ll a,cnt = 0;
    cin >> a;
    for(int i = 0 ; i < a ; i++){

    }
    return 0;
}