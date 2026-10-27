#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#define ll long long
#define el "\n"
#define bl "TREES"
using namespace std;
void vo(){
	freopen(bl".INP","r",stdin);
	freopen(bl".OUT","w",stdout);
}
int check(vector<int> vt){
    int n = vt.size();
    if(n == 0) return 0;
    vector<int> vp(n,1);
    int re = 0;
    for(int i = 0 ; i < n ; i++){
    	for(int j = 0 ; j < i ; j ++){
    		if(vt[j] < vt[i]) vp[i] = max(vp[i],vp[j] + 1);
		}
		re = max(re,vp[i]);
	}
	return re;
}
int main(){
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	vo();
	int n,k;
	cin >> n >> k;
	vector<int> vt(n),vl,vr;
	for(int &x :vt) cin >> x;
	int tmp = vt[k - 1];
	for(int i = 0 ; i < k - 1 ; i++) 
		if(vt[i] < tmp) vl.push_back(vt[i]);
	for(int i = k ; i < n ; i++) 
		if(vt[i] > tmp) vl.push_back(vt[i]);
	cout << check(vl) + check(vr) + 1 << el; 
	return 0;
}