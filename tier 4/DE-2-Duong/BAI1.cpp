#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	//freopen("BAI1.INP","r",stdin);
	int n;
	cin >> n;
	vector<int> vt(n);
	for(int i = 0 ; i < n ; i++){
		cin >> vt[i];
	}
	int mx = *max_element(vt.begin(),vt.end());
	int mn = *min_element(vt.begin(),vt.end());
	long long res = abs(mx) + abs(mn) + mx - mn;
	cout << res;
	return 0;
}