#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define vo "TEPTIN"
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
    int n;
    cin >> n;
    string a;
    cin >> a;
    int cnt = 0,re = 0;
	for(int i = 0 ; i < (int)a.size() ; i++){
		if(a[i] == 'x'){
			cnt++;
			if(cnt > 2){
			re++;
			cnt = 2;
				}
			}else{
			cnt = 0;
		}
	}
	cout << re << el;
	return 0;
}
