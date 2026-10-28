#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bl "BAI2"
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
    ll n;
    cin >> n;
    ll os = sqrt(n);
    vector<bool> sie(os + 2,true);
    sie[0] = sie[1] = false;
    for(ll i = 2 ; i * i <= os; i ++){
        if(sie[i]){
            for(ll j = i * i ; j <= os ; j += i){
                sie[j] = false;
            }
        }
    }
    int re = 0;
    for(ll i = 2 ; i <= os ; i++){
        if(sie[i]) re++;
    }
    cout << re << el;
    return 0;
}