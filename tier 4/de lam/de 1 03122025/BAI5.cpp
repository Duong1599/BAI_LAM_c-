#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	int n,mxct = 0,mnct = 0;
	cin >> n;
	vector<int> vt(n);
	for(int i = 0 ; i < n ; i ++){
		cin >> vt[i];
	}
	for(int i = 0 ; i < n ; i ++){
		for(int j = i ; j < n ; j ++){
			if(max(vt[i],vt[j]) == min(vt[i] , vt[j]));
		}
	}
	return 0;
}