#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	freopen("BAI2.INP","r",stdin);
	int w1,w2,h1,h2;
	cin >> w1 >> h1 >> w2 >> h2;
	long long res = 2 * (max(w1, w2) + h1 + h2) + 2 * abs(w1 - w2);
	cout << res;
	return 0;
}