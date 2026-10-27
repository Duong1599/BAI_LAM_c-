#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bl "PREFIXES"
using namespace std;
void vo(){
	freopen(bl".INP","r",stdin);
	freopen(bl".OUT","w",stdout);
}
int main(){
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	vo();
	int n,cnt = 0;
	bool opa = true,opb = true;
	cin >> n;
	string a,re = "";
	cin >> a;
	for(int i = 0 ; i < n / 2; i++){
		if(a[i * 2] == a[i * 2 + 1]){
			if(a[i * 2] == 'a'){
				if(opa){
					re+= "ab";
					opa = false;
					cnt ++;
				}else{
					re+= "ba";
					opa = true;
					cnt ++;
				}
			}else{
				if(opb){
					re += "ab";
					opb = false;
					cnt ++;
				}else{
					re+= "ba";
					opb = true;
					cnt ++;
				}
			}
		}else{
			re += a.substr(i * 2 , 2);
		}
	}
	cout << cnt << el << (cnt != 0 ? re : a);
	return 0;
}