#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#define VO "BTL1"
#define el "\n"
#define fi first
#define se second
using namespace std;

	bool cmp(pair<int,int> a,pair<int,int> b){
		return a.fi > b.fi;
	}
	bool cmp2(pair<int,int> a,pair<int,int> b){
		return a.se > b.se;
	}
int main(){

    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen(VO".INP","r",stdin);
    freopen(VO".OUT","w",stdout);

	int n,al;
	cin >> n >> al;
	vector<int> vt(n);
	vector<pair<int,int>> st(n);
	for(int i = 0 ; i < n ; i++){
		cin >> vt[i];
		st[i].fi = vt[i];
	}
	int cnt = 0 ;
	sort(st.begin(),st.end(),cmp);
	for(int i = 0 ; i < (int)st.size() ; i++){
		int k = al / st[i].fi ;
		st[i].se = k;
		cnt += k;
		al %= st[i].fi;
	}
	cout << cnt << el;
	for(int i = (int)st.size() - 1 ; i >= 0 ; i--){
		cout << st[i].second << ' ';
	}
	return 0;
}
