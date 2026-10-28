#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bl "BAI5"
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
    vector<int> cn(n+1,0);
    for(int i = 2 ; i <= n ; i++){
        int k = i;
        for(int j = 2 ; j * j <= k ; j ++){
            while(k % j == 0){
                cn[j]++;
                k/=j;
            }
        }
        if(k > 1){
            cn[k]++;
        }
    }
    for(int i = 0 ; i <= n ; i++){
        if(cn[i] > 0){
            cout << cn[i] << ' ';
        }
    }
    return 0;
}