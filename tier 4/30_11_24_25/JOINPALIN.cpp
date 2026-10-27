#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define ll long long
#define vo "JOINPALIN"
#define el "\n"
using namespace std;
void IN (){
	freopen(vo".INP","r",stdin);
	freopen(vo".OUT","w",stdout);
}
bool check(string a){
	for(int i = 0 ; i < (int)a.size() / 2 ; i++){
		if(a[i] != a[(int)a.size() - i - 1]) return false;
	}
	return true;
}
int sub1(string a, string b){
	int re = 0;
	for(int i = 1 ; i <= (int)a.size() ; i++){
		for(int j = 1 ; j <= (int)b.size() ; j++){
			string tm = a.substr(0,i) + b.substr(j - 1);
			if(check(tm)) re = max(re,(int)tm.size());
		}
	}
	return re;
}
int main(){
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	IN();
	string a,b;
	cin >> a >> b;
	cout << sub1(a,b) << el;
	return 0;
}