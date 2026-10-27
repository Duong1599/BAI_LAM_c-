#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    freopen("BAI3.INP", "r", stdin);
    //freopen("BAI3.OUT", "w", stdout);
	int c;
	cin >> c;
	while(c--){
	int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0 ; i < n;i++){
        	cin >> a[i];
		}

        vector<bool> ghe(n + 2, false); 
        bool ok = true;
        for(int i = 0 ; i < n ; i++){
        	int vt = a[i];
        	if(i == 0){
        		ghe[vt] = true;
        		continue;
			}
			bool tr = ghe[vt - 1],ph = ghe[vt + 1];
			if(!(tr || ph)){
				ok = false;
				break;
			}
			ghe[vt] = true;
	}
        cout << (ok ? "YES" : "NO") << "\n";
}
    return 0;
}
