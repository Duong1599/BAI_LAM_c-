#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    freopen("BAI4.INP","r",stdin);
    //freopen("BAI4.OUT","w",stdout);

    int n, r;
    cin >> n >> r;
    vector<int> vt(n, 0);

	for(int i = 0 ; i < r ; i++){
        int bd, kt;
        cin >> bd >> kt;
        while(bd = kt){
        	vt[bd]++;
        	bd++;
        	if(bd == n) bd = 0;
		}
    }

    for(int x : vt) cout << x << ' ';
    return 0;
}
