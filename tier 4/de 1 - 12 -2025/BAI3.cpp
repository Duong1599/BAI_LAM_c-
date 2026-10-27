#include <bits/stdc++.h>
using namespace std; 
	int main(){
		cin.tie(0); 
		cout.tie(0); 
		ios_base::sync_with_stdio(false); 
		freopen("BAI3.INP","r",stdin); 
		freopen("BAI3.OUT","w",stdout); 
		int d,b,res = 0;
			cin >> d >> b; 
		int tmp = d;
		vector<int> de,su;
		while(d--){ 
			vector<int> vt(b);
			int sum = 0; 
			int dem = 0; 
				for(int &x : vt){ 
				cin >> x; 
			if(x != 0) dem++;
				sum += x; 
		} 
		de.push_back(dem);
		su.push_back(sum); 
		} 
		int bi = 0; 
		for(int i = 0 ; i < tmp ; i++){ 
			if(de[i] > de[bi]) bi = i;
			else if(de[i] == de[bi] && su[i] < su[bi]) bi = i;
		} 
		cout << bi + 1;
		return 0; 
}