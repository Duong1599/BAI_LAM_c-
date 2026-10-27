#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define ll long long
#define vo "SUMDIG"
#define el "\n"
using namespace std;
void IN (){
	freopen(vo".INP","r",stdin);
	freopen(vo".OUT","w",stdout);
}
int sub1(int n){
	int cnt = 0;
	vector<int> vt(n);
	for(int &x : vt) cin >> x;
	for(int i = 0 ; i < n ; i++){
		for(int j = i + 1 ; j < n ; j++){
			set<int> st;
			for(int k = i ; k <= j ; k++){
				st.insert(vt[k]);
			}
			if((int)st.size() == (j - i + 1)) cnt ++;
		}
	}
	return cnt + n;
}
int main(){
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	IN();
	int n;
	cin >> n;
	cout << sub1(n) << el;
	
	return 0;
}