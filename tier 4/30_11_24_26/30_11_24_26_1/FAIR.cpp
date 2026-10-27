#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bl "FAIR"
using namespace std;
const ll MOD = 123456789;
void VO (){
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
}
    ll trau(ll x,ll su,ll k, vector<ll>& vt){
        if(x == vt.size()){
            if(su == k) return 1;
            else return 0;
        }
        ll tm1 = trau(x+1,su+vt[x],k,vt);
        ll tm2 = trau(x+1,su,k,vt);
        return tm1+tm2;
    }
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    VO();
    ll n , k;
    cin >> n >> k;
    vector<ll> vt(n);
    for(ll &x : vt) cin >> x;
    cout << trau(0,0,k,vt);
    return 0;
}