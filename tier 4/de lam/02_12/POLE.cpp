#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	freopen("POLE.INP","r",stdin);
	//freopen("POLE.OUT","w",stdout);
	int n, c,mx = INT_MIN,tmp1 = 0,tc1 = 0,tc2 = 0;
	cin >> n >> c;
	vector<int> vt(n),vtm(n + 1);
	for(int i = 0 ; i < n ; i++){
		cin >> vt[i];
		mx = max(vt[i],mx);
	}
	vtm = vt;
	for(int i = 0 ; i < n ; i++){
		int tp = mx - vt[i];
		if(tp > c) tc1 += (tp - c) * (tp - c);
	}
	for(int i = 0 ; i < n ; i++){
		if(mx - vt[i] - c > 0) vtm[i] = vtm[i] + mx - vt[i] - c;
	}
	for(int i = 0 ; i < n - 1; i++){
		tc2 += abs(vtm[i + 1] - vtm[i]);
	}
	int res = tc1 + c*tc2;
	cout << res;
	return 0;
}