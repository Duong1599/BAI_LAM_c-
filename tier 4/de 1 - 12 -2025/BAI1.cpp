#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	freopen("BAI1.INP","r",stdin);
	freopen("BAI1.OUT","w",stdout);
	long long res = 0 ;
	string a;
	cin >> a;
	for(char &x : a){
		res += x - '0';
	}
	cout << res;
	return 0;
}