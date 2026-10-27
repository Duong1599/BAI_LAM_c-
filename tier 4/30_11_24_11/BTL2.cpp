#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
//#pragma GCC optimize ("unroll-loop")
#define VO "BTL1"
#define el "\n"
using namespace std;
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    //freopen(VO".INP","r",stdin);
    //freopen(VO".OUT","w",stdout);
	
	int n;
	cin >> n;
	vector<int> vt(n + 1),pre(n+2,0);
	for(int i = 1 ; i <= n ; i++){
		cin >> vt[i];
		pre[i] = pre[i - 1] + vt[i];
	}
	int sum = 0,re=0;
	for(int i = 1 ; i <= n ; i++){
		for(int j = i ; j <= n ; j++){
			for(int k = j ; k <= n ; k++){
				int su1=pre[i - 1] - pre[j],su2=pre[j - 1] - pre[k],su3=pre[k - 1] - pre[n - 1];
				if(su1 == su2 == su3) re++;
			}
		}
	}
	cout << re << el;
	return 0;
}
