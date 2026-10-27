#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("BAI4.INP","r",stdin);
    //freopen("BAI4.OUT","w",stdout);
    int a, k,sum = 0,ct = 0;
    cin >> a >> k;
    vector<int> vt(a);
    for(int i = 0 ; i < a ; i++){
        cin >> vt[i];
    }
    for(int i = 0 ; i < a ; i++){
        int r = vt.size() - 1,l = 0,tg = 0;
        while(l < r){
            if(k == sum) break;
            if(k > sum){l++; ct ++;}
            else {r--; ct++; }
        }
    }
    cout << ct;
    return 0;
}