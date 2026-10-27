#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#define ll long long
#define el "\n"
#define bl "MARKA"
using namespace std;
void vo(){
	freopen(bl".INP","r",stdin);
	freopen(bl".OUT","w",stdout);
}
int sub1(vector<int> &va, vector<int> &vb){
	int re = 0;
	for(int &x : va){
		for(int i = 0 ; i < vb.size() ; i++){
			if(x <= vb[i]){
				break;
			}else{
				re++;
			}
		}
	}
	return re;
}
int sub2(vector<int> &va,vector<int> &vb){
	int re = 0;
	for(int i = 0 ; i < va.size() ; i++){
		re+=(distance(vb.begin(),lower_bound(vb.begin(),vb.end(),va[i])));
	}
	return re;
}
int main(){
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	vo();
	int a,b;
	cin >> a >> b;
	vector<int> vta(a),vtb(b);
	for(int &x : vta) cin >> x;
	for(int &x : vtb) cin >> x;
	
	//sub 1
	//cout << sub1(vta,vtb);
	//sub 2
	cout << sub2(vta,vtb);
	return 0;
}