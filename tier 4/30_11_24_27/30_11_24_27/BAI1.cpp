#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bl "BAI1"
using namespace std;
void VO(){
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    VO();
    int n;
    cin >> n;
    vector<int> vt(n);
    for(int &x : vt) cin >> x;
    int mx = *max_element(vt.begin(),vt.end());
    int mn = *min_element(vt.begin(),vt.end());
    int x = 0,y = 0,z = 0,tmp =0;
    for(int i = 0 ; i < n ; i++){
        if(vt[i] == mn){
            tmp = mn;
            x++;
            continue;
        }
        if(vt[i] == mx){
            tmp = mx;
            continue;
        }
        if(vt[i] > tmp){
            tmp = vt[i];
            y++;
            continue;
        }else{
            tmp = vt[i];
            z++;
            continue;
        }
    }
    cout << x << ' ' << y <<' '<< z << el;

    return 0;
}