#include<bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

void check(){
	int n, k;
	cin >> n >> k;
	vector<long long> a(n + 1);
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}	
	vector<long long> f(k + 1, 0);
	f[0] = 1;
	for(int i = 1; i <= k; i++){
		for(int j = 1; j <= n; j++){
			if(i >= a[j]){
				f[i] += f[i - a[j]];
				f[i] %= MOD;
			}
		}
	}
	cout << f[k];
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); 
		cout << endl;
	}
}
