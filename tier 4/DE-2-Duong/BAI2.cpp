#include<bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	//freopen("BAI2.INP","r",stdin);
	int n,k,h = 0;
	cin >> n >> k;
	if(n < 1){
		cout << 0;
		return 0;
	}
	int may = 1;
	while(may <= n){
		may += min(may,k);
		h++;
	}
	cout << h;
	return 0;
}