#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	freopen("BAI2.INP","r",stdin);
	freopen("BAI2.OUT","w",stdout);
	int n,ct = 0;
	cin >> n;
	unordered_map <int,int> mp;
	vector<int> vt(n),res;
	for(int &x : vt){
	cin >> x;
	mp[x]++;
}
	for(int i = 0 ; i < n ; i++){
		if(mp[vt[i]] == 1){
		ct++;
		res.push_back(vt[i]);
		}
	}
	cout << ct << "\n";
	for(int x : res){
		cout << x << "\n";
	}
	return 0;
}