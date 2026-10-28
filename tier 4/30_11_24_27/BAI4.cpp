#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bl "BAI4"
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
    int n,k,re = 0;
    cin >> n >> k;
    vector<int> vt(n);
    for(int &x : vt) cin >> x;
    sort(vt.begin(),vt.end());   
    for(int i = 0 ; i < n ; i++){
        int mar = k - vt[i];
        auto it = lower_bound(vt.begin() + i + 1,vt.end(),mar);
        auto it1 = upper_bound(vt.begin() + i + 1,vt.end(),mar);
        re += (int)(it1 - it);
    }
    cout << re << el;
    return 0;
}
//auto range = equal_range(bg,en,x);
//range first + second