#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#define VO "HVAPPLE"
#define el "\n"
#define fi first
#define se second
#define ll long long
using namespace std;
void bl() {
	freopen(VO".INP","r",stdin);
	freopen(VO".OUT","w",stdout);
}
int main() {

	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	bl();
	int n,k;
	cin >> n >> k;
	vector<int> vt(n);
	for(int &x : vt) cin >> x;
	int cmp = 0,tong = 0;
	for(int i = 0 ; i <= n ; i++){
		int moi = (i < n) ? vt[i] : 0 ;
		int lcu = min(cmp,k) ,lmo = min(moi,k-lcu);
		tong+= lcu+lmo;
		cmp=moi-lmo;
	}
	cout << tong << el;

	return 0;
}
