#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bl "FRIEND"
using namespace std;
void vo(){
	freopen(bl".INP","r",stdin);
	freopen(bl".OUT","w",stdout);
}
int sub1(vector<int> vt,int k){
	int cnt = 0,n = vt.size();
	for(int i = 0 ; i < n ; i++){
		for(int j = i ; j < n ; j++){
			if(vt[i] + vt[j] == k) cnt ++;
		}
	}
	return cnt;
}
int sub2(vector<int> &vt,int k){
	sort(vt.begin(),vt.end());
	int re = 0;
	for(int i = 0 ; i < (int)vt.size() ; i++){
		int mar = k - vt[i];
		auto fi = lower_bound(vt.begin() + i + 1,vt.end(),mar), en = upper_bound(vt.begin() + i + 1,vt.end(),mar);
		re += en - fi;
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
	vector<int> vt(n);
	for(int &x : vt) cin >> x;
	cout << sub2(vt,k) << el;
	return 0;
}