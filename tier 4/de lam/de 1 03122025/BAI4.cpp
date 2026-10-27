#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	freopen("BAI4.INP","r",stdin);
	int n , k,rs = 0;
	cin >> n >> k;
	vector<int> vt(n);
	for(int i = 0 ; i < n ; i++){
		cin >> vt[i];
	}
		int l = 0, r = n - 1,tg = 0;
		while(l < r){
			if(tg == k) break;
			else{
			if(l < r){
				tg += vt[l];
				l ++;
				rs ++;
			}
			if(tg == k) break;
			if(r > l){
				tg += vt[r];
				r --;
				rs ++;
				}
			}
		}
		if(tg != k) rs = -1;
	cout << rs;
	return 0;
}