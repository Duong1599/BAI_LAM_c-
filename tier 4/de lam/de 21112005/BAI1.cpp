#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> sang(int n){
	vector<bool> isp(n + 1,true);
	vector<ll> tmp;
	isp [0] = isp[1] = false;
	for(int i = 2 ; i <= n ; i++){
		if(isp[i]){
			tmp.push_back(i);
			for(ll j = i * i; j <= n;j+=i){
				isp[j] = false;
			}
		}			
	}
	return tmp;
}
bool check(int a,vector<ll>& sag){
	if(a == 1) return true;
	ll tmp = a, d = 1,s = 0;
	for(ll x : sag){
		int mu = 0;
		while(tmp % x == 0){
			mu++;
			tmp /= x;
		}
		if(mu > 0){
			d *= mu + 1;
			s += x;
		}
	}
	if(tmp > 1){
		d *= 2;
		s += a;
	}
	return d > s;
}
int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	freopen("BAI1.INP","r",stdin);
	freopen("BAI1.OUT","w",stdout);
	int n,a,b,rs = 0;
	cin >> n >> a >> b;
	int tmp = sqrt(n);
	vector<ll> sag = sang(tmp);
	for(int i = a ; i <= b;i++){
		if(check(i,sag)) rs++;
	}
	cout << rs;
	return 0;
}