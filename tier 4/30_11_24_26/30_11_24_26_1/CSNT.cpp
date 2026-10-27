#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bl "CSNT"
using namespace std;
void VO (){
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
}

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    VO();
    string a;
    cin >> a;
    vector<int> res;
    for(char x : a){
        int k = x - '0';
        if(k == 3 || k == 5 || k == 2 || k == 7 && find(res.begin(),res.end(),k) == res.end()){
            res.push_back(k);
        }
    }
    for(int x : res){
        cout << x << ' ';
    }
    return 0;
}
/*
int tes1(string a){
    int ca2 = 0,ca3 = 0,ca5 = 0,ca7 = 0 ;
    for(int i = 0 ; i < (int)a.size() ; i++){
        switch (a[i] - '0'){
            case 2:
                ca2 ++;
                continue;
            case 3:
                ca3 ++;
                continue;
            case 5:
                ca5 ++;
                continue;
            case 7:
                ca7 ++;
                continue;
        }
    }
    if(ca2 == 0 && ca3 == 0 && ca5 == 0 && ca7 == 0){
        cout << 0;
        return 0;
    }
    if(ca2 > 0) cout << 2 << ' ';
    if(ca3 > 0) cout << 3 << ' ';
    if(ca5 > 0) cout << 5 << ' ';
    if(ca7 > 0) cout << 7 << ' ';

}
*/