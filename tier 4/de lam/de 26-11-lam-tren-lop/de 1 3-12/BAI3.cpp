#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("BAI3.INP","r",stdin);
    //freopen("BAI3.OUT","w",stdout);
    int a,t1,t2,res = INT_MAX;
    cin >> a >> t1 >> t2;
    vector<int> vt(a);
    int t = 0,p = 0;
    for(int i = 0 ; i < a ; i++){
        cin >> vt[i];
        if(vt[i] == t1) t = i;
        if(vt[i] == t2) p = i;
        if(t != 0 && p != 0) res = min(res,abs(t - p));
    }
    cout << res;
    return 0;
}