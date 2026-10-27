#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	freopen("BAI2.INP","r",stdin);
	freopen("BAI2.OUT","w",stdout);
	int n , m;
	cin >> n >> m;
	unordered_map<int,int> mp;
	while(n--){
		int x;
		cin >> x;
		mp[x]++;
	}
	while(m--){
		int x;
		cin >> x;
		cout << mp[x] << "\n";
	}
	return 0;
}