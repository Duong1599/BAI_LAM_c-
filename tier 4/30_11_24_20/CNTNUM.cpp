#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#define VO "CNTNUM"
#define el "\n"
#define fi first
#define se second
#define ll long long
using namespace std;
void bl(){
	freopen(VO".INP","r",stdin);
    freopen(VO".OUT","w",stdout);
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    bl();
	ll a,b,c,d,re=0;
	cin >> a >> b >> c >>d;
	for(int i = a ; i <= b ; i++){
		if(!(i %c ==0) && !(i%d==0)) re++;
	}
	cout << re << el;
	return 0;
}
