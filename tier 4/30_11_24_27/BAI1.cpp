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
    int mn = *min_element(vt.begin(),vt.end());
    int x = 0,y = 0,z = 0;
    for(int t : vt) if(t == mn) x++;
    for(int i = 0 ; i < n - 1 ; i++){
        if(vt[i] < vt[i+1]){
            if(i == 0|| vt[i - 1]>=vt[i]) y++;
        }else if(vt[i] > vt[i+1]){
            if(i == 0|| vt[i - 1]<=vt[i]) z++;
        }
    }
    cout << x << ' ' << y << ' ' << z;
    return 0;
}