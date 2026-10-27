#include <bits/stdc++.h>
using namespace std;
int tong(int a){
    int tg = 0;
    for(int i = 1 ; i * i <= a ; i++){
        if(a % i == 0){
            tg += i;                   
            if(i != a / i)	tg += a / i;
        }
    }
    return tg - a; 
}
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	freopen("TIHON.INP","r",stdin);
	//freopen("TIHON.OUT","w",stdout);
	int a,res = 0;
	cin >> a;
	vector<int> vt(a);
	for(int i = 0 ; i < a ; i++){
		cin >> vt[i];
	}
	for(int x : vt){
		int tmp = tong(x);
		if(x < tmp) res++;
	}
	cout << res;
	return 0;
}