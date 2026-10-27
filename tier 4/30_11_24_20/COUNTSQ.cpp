#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#define VO "COUNTSQ"
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
	int n;
	cin >> n;
	while (n--){
		int x;
		cin >> x;
		cout << (int)sqrt(x) << el;
	}
	return 0;
}
