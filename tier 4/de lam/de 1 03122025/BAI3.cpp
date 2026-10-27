#include <bits/stdc++.h>
using namespace std;
	int main(){
		cin.tie(0);
		cout.tie(0);
		ios_base::sync_with_stdio(false);
		freopen("BAI3.INP","r",stdin);
		int n,x,y,v1 = 0,v2 = 0;
		cin >> n >> x >> y;
		vector<int> vt(n);
		for(int i = 0 ; i < n ; i++){
			cin >> vt[i];
			if(vt[i] == x) v1 = i;
			if(vt[i] == y) v2 = i;
		}
		cout << abs(v1 - v2);
		return 0;
	}