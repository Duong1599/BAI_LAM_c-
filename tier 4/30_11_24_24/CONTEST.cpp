#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bl "CONTEST"
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
	int ng,bt,q;
	cin >> ng >> bt >> q;
	vector<pair<string,int>> vt(ng),ac(bt);
	for(int i = 0 ; i < ng ; i++){
		cin >> vt[i].first;
		vt[i].second = 0;
	}
	for(int i = 0 ; i < bt ; i++){
		cin >> ac[i].first;
		cin >> ac[i].second;
	}
	while(q--){
		string te,bai,ds;
		cin >> te >> bai >> ds;
		for(int i = 0 ; i < ng ; i++){
			if(vt[i].first == te){
				for(int j = 0 ; j < bt ; j++){
					if(ac[j].first == bai){
						vt[i].second += (ds == "AC" ? ac[j].second : 0);
					}
				}
			}
		}
	}
	for(int i = 0 ; i < ng ; i++){
		cout << vt[i].first << ' ' << vt[i].second << el;
	}
	return 0;
}