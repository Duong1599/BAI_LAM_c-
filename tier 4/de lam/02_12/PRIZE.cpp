#include<bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	freopen("PRIZE.INP","r",stdin);
	//freopen("PRIZE.OUT","w",stdout);
	int m,n;
	cin >> m >> n;
	vector<int> vt(m),vt2(n);
	for(int i = 0 ; i < m ; i ++){
		cin >> vt[i];
	}
	sort(vt.begin(),vt.end(),greater<int>());
	for(int i = 0 ; i < n ; i++){
		vt2[i] = vt[i];
	}
	long long res = vt[n - 1] * n;
	cout << res;
	return 0;
}