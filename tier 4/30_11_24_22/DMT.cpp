#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#define ll long long
#define el "\n"
#define bl "DMT"
using namespace std;
void vo(){
	freopen(bl".INP","r",stdin);
	freopen(bl".OUT","w",stdout);
}
int sub1(int l, int r){
	int re = 0;
	for(int i = l ; i <= r ; i++){
		if(i % 3 != 0) continue;
		else{
			int cnt = 0;
			for(int j = 1 ; j <= sqrt(i) ; j++){
				if(i % j == 0){
					if(i / j == j){
						cnt++;
					}else{
						cnt += 2;
					}
				}
			}
			if(cnt == 9) re++;
		}
	}
	return re;
}
int main(){
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	vo();
	int a;
	cin >> a;
	while(a--){
		int l,r;
		cin >> l >> r;
		cout << sub1(l,r) << el;
	}
	return 0;
}