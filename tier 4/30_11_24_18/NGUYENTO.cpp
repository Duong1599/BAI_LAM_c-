#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define vo "NGUYENTO"
using namespace std;
void bl(){
    freopen(vo".INP","r",stdin);
    freopen(vo".OUT","w",stdout);
}
int n = 1e7 + 5;
vector<bool> sieve(n,true);
void sang(){
    sieve[0] = sieve[1] = false;
    for(int i =  2 ; i * i <= n ; i++){
        if(sieve[i]){
            for(int j = i * i ; j <= n ; j+= i){
                sieve[j] = false;
            }
        }
    }
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    bl();
	sang();
	int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        cout << (sieve[x] ? "YES" : "NO") << el;
    }
    return 0;
}
