#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	freopen("BAI1.INP","r",stdin);
	freopen("BAI1.OUT","w",stdout);
	long long n,res = 0;
	cin >> n;
	for(int i = 5 ; i <= n ; i*=5){
		res += n / i;
	}
	cout << res;
	return 0;
	}