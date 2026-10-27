#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	freopen("BAI3.INP","r",stdin);
	freopen("BAI3.OUT","w",stdout);
	int n;
	cin >> n;
	cin.ignore();
	while(n--){
		string a;
		getline(cin, a);
		set<char> st;
		for(char x : a){
			if(isalpha(x)) st.insert(tolower(x));
		}
		cout << (st.size() == 26 ? "YES" : "NO");
	}
}