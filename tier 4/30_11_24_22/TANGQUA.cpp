#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#define ll long long
#define el "\n"
#define bl "TANGQUA"
using namespace std;
void vo(){
	freopen(bl".INP","r",stdin);
	freopen(bl".OUT","w",stdout);
}
int main(){
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	vo();
	int n,cnt = 0;
	cin >> n;
	while(n--){
		string a;
		cin >> a;
		cin.ignore();
		if(a == "TOT" || a == "KHA"){
			cnt ++ ;
		}else if(a.size() < 3 && a != "TB" && stoi(a) < 15){
			cnt ++ ;
		}
	}
	cout << cnt << el;
	return 0;
}