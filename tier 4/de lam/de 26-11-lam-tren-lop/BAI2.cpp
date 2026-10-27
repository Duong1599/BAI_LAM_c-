#include <bits/stdc++.h>
using namespace std;

void tach(int a, vector<int>& v2){
    v2.push_back(a / 10);
    v2.push_back(a % 10);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    freopen("BAI2.INP", "r", stdin);
    freopen("BAI2.OUT", "w", stdout);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v1(n), v2;
        for(int &x : v1) cin >> x;

        for(int x : v1){
            if(x < 10) v2.push_back(x);
            else tach(x, v2);
        }

        bool ok = true;

        for(int i = 0; i + 1 < v2.size(); i++){
            if(v2[i] > v2[i+1]){
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }

    return 0;
}
