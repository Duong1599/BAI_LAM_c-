#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	freopen("BAI3.INP","r",stdin);
	freopen("BAI3.OUT","w",stdout);
	string a;
	cin >> a;
	unordered_map<char,int> mp;
	vector<char> vt;
	for(char x : a){
		if(x == '2' || x == '3' || x == '7' || x == '5'){
			mp[x]++;
			if(mp[x] == 1) vt.push_back(x);
		}
	}
	if(vt.empty()){
		cout << '0';
		return 0;
	}else{
	for(char x : vt){
		cout << x << ' ';
		}
	}
	return 0;
}