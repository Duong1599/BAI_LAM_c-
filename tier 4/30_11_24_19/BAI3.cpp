#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define vo "BAI3"
using namespace std;
void bl(){
    freopen(vo".INP","r",stdin);
    freopen(vo".OUT","w",stdout);
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
	//bl();
	string a,b,re = 0;
	cin >> a >> b;
	for(char x : a){
		re += x;
		if(re.size() >= b.size() && re.substr(re.size() - b.size()) == b)
			re.erase(re.size() - b.size());
	}
	cout << re;
	
	return 0;
}