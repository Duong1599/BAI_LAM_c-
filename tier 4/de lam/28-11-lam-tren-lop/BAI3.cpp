#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	freopen("BAI3.INP","r",stdin);
	//freopen("BAI3.OUT","w",stdout);
	
	int n,w,re;
	cin >> n>>w;
	vector<int> vt1(n + 1),pre(n + 1 , 0);
	for(int i = 1 ; i <= n ; i++){
		cin >> vt1[i];
		pre[i] = vt1[i] + pre[i - 1];
	}
	for(int i = 1 ; i <= n ; i++){
		for(int j = i ; j <= n ; j++)
			if(pre[j] - pre[i - 1] > w){
				re = min(re,j - i + 1);
			}
	}
	cout << re;
	return 0;
}