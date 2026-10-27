#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bl "POW"
using namespace std;
void vo(){
	freopen(bl".INP","r",stdin);
	freopen(bl".OUT","w",stdout);
}
void sub1(ll l , ll r , ll t){
	bool ok = false;
	for(int i = 0 ; i <= sqrt(r) + 1 ; i++){
		ll tmp = pow(t,i);
		if(tmp >= l && tmp <= r){
			cout << tmp << ' ';
			ok = true;
		}
		if(tmp > r) break;
	}
	if(!ok) cout << -1 << el;
}
int main(){
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	//vo();
	int l,r,t;
	cin >> l >> r >> t;
	sub1(l,r,t);
	return 0;
}