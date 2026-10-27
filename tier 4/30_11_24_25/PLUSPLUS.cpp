#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
#define ll long long
#define vo "PLUSPLUS"
#define el "\n"
using namespace std;
void IN (){
	freopen(vo".INP","r",stdin);
	freopen(vo".OUT","w",stdout);
}

int main(){
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	IN();
	int q;
	cin >> q;
	while(q--){
		int a,b,n,cnt = 0;
		cin >> a >> b >> n;
		while( a <= n && b <= n){
			if(a < b) {
				a += b;
				cnt ++;
			}else{
				b += a;
				cnt ++;
			}
		}
		cout << cnt << el;
	}
	return 0;
}