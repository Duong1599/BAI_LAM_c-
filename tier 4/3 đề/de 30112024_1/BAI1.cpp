#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	freopen("BAI1.INP","r",stdin);
	freopen("BAI1.OUT","w",stdout);
	long long n,cn = 0;
	cin >> n;
	long long res = 0;
	for(int i = 0 ; i < n ; i ++){
		for(int j = 0 ; j < i ; j++){
			res += i;
			cn++;
			if(cn == n) break;
		}
		if(cn == n) break;
	}
	cout << res;
	return 0;
}