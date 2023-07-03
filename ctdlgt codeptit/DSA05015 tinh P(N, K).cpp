#include<bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;

void check(){
	int n, k;
	cin >> n >> k;
	long long res = 1;
	if(k > n) res = 0;
	for(int i = n - k + 1; i <= n; i++){
		res = (res * i) % MOD;
	}
	cout << res;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
