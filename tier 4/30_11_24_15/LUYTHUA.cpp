#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
//#pragma GCC optimize ("unroll-loop")
#define VO "BTL1"
#define el "\n"
using namespace std;

int main(){

    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    //freopen(VO".INP","r",stdin);
    //freopen(VO".OUT","w",stdout);

    int n,a,d;
    signed long long al =1;
    cin >> a >> n >>d;
    for(int i = 1 ; i <= n ; i++){
    	al += (unsigned long long) pow(a,i*d);;
	}
	cout << al;
	return 0;
}
