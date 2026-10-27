#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	freopen("STR.INP","r",stdin);
	//freopen("STR.OUT","w",stdout);
	string a;
	ll res = 0,tmp = 0;
	set<char> st;
	cin >> a;
	for(char &x : a){
	if(islower(x)) st.insert(x);
	if(!isdigit(x)) x = ' ';
	}
	stringstream ss(a);
	
	while (ss >> tmp){
		res = max(res,tmp);
	}
	cout << st.size() << "\n" << res;
	return 0;
}