#include<bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

void check(){
	int n, k; cin >> n >> k;
	long long dp[n + 1] = {0}; // so cach de buoc len bac thu i
	dp[0] = dp[1] = 1; // co 1 cach de di len bac 1;
	for(int i = 2; i <= n; i++){
		for(int j = 1; j <= min(i, k); j++){
			dp[i] += dp[i - j];
			dp[i] %= MOD;
		}
	}
	cout << dp[n];
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
