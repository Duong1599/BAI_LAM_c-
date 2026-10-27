#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#define VO "BAI4"
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
	string a;
	cin >> a;
	int re = 0 ;
	for(int i = 0 ; i < (int)a.size() ; i++){
		int cnta=0,cntb=0;
		for(int j = i ; j < (int) a.size() ; j++){
			if(a[j] == 'A'){
				cnta++;
			}else{
				cntb++;
			}
			if(cnta == cntb){
				re ++;
			}
		}
	}
	cout << re << el;
	return 0;
}
