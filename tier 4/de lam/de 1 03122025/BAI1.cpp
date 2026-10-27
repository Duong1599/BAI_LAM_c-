#include <bits/stdc++.h>
using namespace std; 
int dao (int a){
	int rs = 0;
	while(a > 0){
		rs = rs * 10 + a % 10;
		a /= 10;
	}
	return rs;
}
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	freopen("BAI1.INP","r",stdin);
	//freopen("BAI1.OUT","w",stdout);
	vector<int> vt(6);
	for(int i = 1 ; i < vt.size() ; i ++){
		cin >> vt[i];
	}
	int rs = 0;
	for(int i = 1 ; i < vt.size() ; i ++){
		if(vt[i] != 0) rs = rs * 10 + i;
	}
	cout << dao(rs);
	return 0;
}