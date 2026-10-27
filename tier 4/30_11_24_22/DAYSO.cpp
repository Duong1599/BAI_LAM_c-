#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#define ll long long
#define el "\n"
#define bl "DAYSO"
using namespace std;
void vo(){
	freopen(bl".INP","r",stdin);
	freopen(bl".OUT","w",stdout);
}
int sub1(vector<ll> &vt,ll &k){
	ll re = 0, n = vt.size();
	for(ll i = 0 ; i < vt.size() ; i++){
		for(ll j = i ; j < vt.size() ; j++){
			if((vt[i] + vt[j]*vt[j]) == k) re++;
		}
	}
	return re;
}
int main(){
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	vo();
	ll n,k;
	cin >> n >> k;
	vector<ll> vt(n);
	for(ll &x : vt) cin >> x;
	cout << sub1(vt,k) << el;
	return 0;
}