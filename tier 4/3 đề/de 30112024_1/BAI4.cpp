#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("BAI4.INP","r",stdin);
	int n , k , b,res = 0;
	cin >> n >> k >> b;
	vector<int> vt(n);
	int tmp = (b - 1) % n;
	for(int i = 0 ; i < n ; i++){
		cin >> vt[i];
	}

	while(k--){
		res += vt[tmp];
		tmp++;
		if(tmp == n) tmp = 0;
	}
	cout << res;
	return 0;
}