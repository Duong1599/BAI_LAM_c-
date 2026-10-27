#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define ll long long
#define vo "LIGHTBALL"
#define el "\n"
using namespace std;
void IN (){
	freopen(vo".INP","r",stdin);
	freopen(vo".OUT","w",stdout);
}
ll sub1(vector<ll> vt1,vector<ll> vt2 , vector<ll> vt3){
	ll re = 1e18;
	ll x = vt1.size(),y = vt2.size(),z = vt3.size();
	for(ll i = 0 ; i < x ; i++){
		for(ll j = 0 ; j < y ; j++){
			for(ll k = 0 ; k < z ; k++){
				ll a = vt1[i] - vt2[j], b = vt2[j] - vt3[k],c = vt3[k] - vt1[i];
				re = min (re,a*a + b*b + c*c);
			}
		}
	}
	return re;
}
int main(){
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	IN();
	ll x,y,z;
	cin >> x >> y >> z;
	vector<ll> boa(x),bob(y),boc(z);
	for(ll &x : boa) cin >> x;
	for(ll &y : bob) cin >> y;
	for(ll &z : boc) cin >> z;
	cout << sub1(boa,bob,boc) << el;
	return 0;
}