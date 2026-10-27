#include <bits/stdc++.h>
using namespace std;
int ngc(int a){
    int rs = 0;
    while(a > 0){
        rs = rs * 10 + a % 10;
        a /= 10;
    }
    return rs;
}
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("BAI1.INP","r",stdin);
    //freopen("BAI1.OUT","w",stdout);
    int rs = 0;
    vector<int> s(6);
    for(int i = 1 ; i <= 5; i++){
        cin >> s[i];
        if(s[i] != 0) rs = rs * 10 + i;
    }
    cout << ngc(rs);
    return 0;
}