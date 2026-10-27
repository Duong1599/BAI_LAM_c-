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
int sum(int a){
	int re = 0 ;
	while(a > 0){
		re += a % 10;
		a /= 10;
	}
	return re;
}
int sub1(int a){
	int cnt = 0;
	for(int i = 0 ; i <= a ; i++){
			if(sum(i) < sum(i - 1)){
				cnt ++;
			}
		}
	return cnt;
}
int main(){
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	IN();
	int n;
	cin >> n;
	if(n <= 1e5){
		cout << sub1(n);
	}else{
		cout << n / 10;
	}
	return 0;
}