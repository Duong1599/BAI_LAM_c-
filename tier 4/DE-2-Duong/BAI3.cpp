#include <bits/stdc++.h>
using namespace std;
bool check(string a){
	int l = 0 , r = a.size() - 1;
	while(l < r){
		if(a[l] != a[r]) return false;
		l++;
		r--;
	}
	return true;
}
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	//freopen("BAI3.INP","r",stdin);
	int n;
	cin >> n;
	while(n--){
		string a;
		int b;
		cin >> a >> b;
		cout << (check(a) ? "YES" : "NO") << "\n";
	}
	return 0;
}