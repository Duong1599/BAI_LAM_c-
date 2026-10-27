	#include <bits/stdc++.h>
	using namespace std;
	
	int main(){
	    cin.tie(0);
	    cout.tie(0);
	    ios_base::sync_with_stdio(false);
	    freopen("BAI1.INP","r",stdin);
	    //freopen("BAI1.OUT","w",stdout);
	
	    int n;
	    cin >> n;
	    while(n--){
	        int a,res = 0,c = 0 , l = 0;
	        cin >> a;
	        if(a == 0){
	            cout << 0 << "\n";
	            continue;
	        }
	        vector<int> vt1(a);
	        for(int i = 0 ; i < a;i++){
	            cin >> vt1[i];
	        }
	        for(int i = 0 ; i < a;i++){
	        	if(vt1[i] % 2 != i % 2){
	        		if(i % 2 == 1) l++;
	        		else c++;
				}
	        }
	        if(c != l) res = -1;
	        else res = c;
	        cout << res << "\n";
	    }
	    return 0;
	}
