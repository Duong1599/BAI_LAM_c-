#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define bl "BSBB"
using namespace std;
void VO (){
    freopen(bl".INP","r",stdin);
    freopen(bl".OUT","w",stdout);
}
int sub1(int n){
    int cnt = 0;
    // a && b > 0 && c > 0 bởi a * b
    for(int a = 1 ; a < n ; a ++){
        for(int b = 1 ; b < n ; b ++){
            if(n - a*b > 0) cnt ++;
        }
    }
    return cnt;
}
int sub2(int n){
    int cnt = 0;
    cnt += (n - 1) - (n / 2) + 1;
    for(int a = 2; a * a < n; a++){      
        for(int c = 1; c < n; c++){       
            int m = n - c;               
            if(m % a == 0){               
                int b = m / a;             
                if(a <= b && b <= c){      
                    cnt++;
                }
            }
        }
    }
    return cnt;
}
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    //VO();
    int n;
    cin >> n;
    if(n < 500){
        cout << sub1(n) << el;
    }else{
        cout << sub2(n) << el;
    }
    return 0;
}