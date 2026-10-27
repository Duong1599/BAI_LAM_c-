#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define vo "DOANCON"
using namespace std;
void bl(){
    freopen(vo".INP","r",stdin);
    freopen(vo".OUT","w",stdout);
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    bl();
    int n , q;
    cin >> n >> q;
	vector<int> vt(n + 1);
	for(int i = 1 ; i <= n ; i++){
		cin >> vt[i];
	}
	while(q--){
		int k,ca = 0,re = 0 ;
		cin >> k;
		for(int i = 1 ; i <= n ; i++){
			if(vt[i] <= k){
				ca++;
			}else{
				re = max(re,ca);
				ca = 0;
			}
		}
		re = max(re,ca);
		cout << re << el;
	}
	
	return 0;
}
