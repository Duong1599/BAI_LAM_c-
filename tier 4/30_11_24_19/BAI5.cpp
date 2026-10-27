#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#define VO "BAI5"
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
	string a,s;
	int k;
	cin >> a >> k;
	for(int c : a){
		while(k>0&&!s.empty() && s.back() > c){
			s.pop_back();
			k--;
		}
		s.push_back(c);
	}
	cout << s << el;
	return 0;
}
