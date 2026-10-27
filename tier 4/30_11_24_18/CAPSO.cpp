#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define vo "CAPSO"
using namespace std;
void bl(){
    freopen(vo".INP","r",stdin);
    freopen(vo".OUT","w",stdout);
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
	bl();
	int n,chan=0,le=0;
	cin >> n;
	int q = n;
	while(q--){
		int x;
		cin >> x;
		if(x % 2 == 0) chan ++;
		else le ++;
	}
	cout <<  (le*(le-1)) /2 +(chan*(chan-1)) /2  << el;
	
    return 0;
}
/*
5 + 4 + 3 + 2 + 1	n = 5
6 + 5 + 4 + 3 + 2 + 1 n = 6
7 + 6 + 5 + 4 + 3 + 2 + 1 n = 7
8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 n = 8
13 + 12 + 11 + 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 = 91
14 + 13 + 12 + 11 + 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 = 105

*/
