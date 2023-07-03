#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	long long dp[n + 1] = {0}; // so cach nhay den bac thu i
	dp[0] = dp[1] = 1;
	for(int i = 2; i <= n; i++){
		for(int j = 1; j <= min(i, 3); j++){
			dp[i] += dp[i - j];
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
