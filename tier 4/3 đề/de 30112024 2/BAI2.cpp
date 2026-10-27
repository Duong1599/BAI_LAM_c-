#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	freopen("BAI2.INP","r",stdin);
	freopen("BAI2.OUT","w",stdout);
	
	int n,k;
	cin >> n >> k;
	vector<long long> vt(n);
	for(long long &x : vt){
	cin >> x;
	}
	long long res = vt[0];
	vector<long long> tm(vt.begin() + 1,vt.end());
	sort(tm.begin(),tm.end(),greater<long long>());
	for(int i = 0 ; i < k ; i++) res += tm[i];
	for(int i = k ; i < tm.size(); i++) res -= tm[i];
	cout << res;
	return 0;
}