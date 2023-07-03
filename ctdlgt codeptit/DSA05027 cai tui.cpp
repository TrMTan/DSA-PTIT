#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, s;
	cin >> n >> s; // n: slg ptu, s; the tich tui
	int w[n + 1], v[n + 1];
	for(int i = 1; i <= n; i++) cin >> w[i];
	for(int i = 1; i <= n; i++) cin >> v[i];
	int dp[n + 1][s + 1];
	memset(dp, 0, sizeof(dp));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= s; j++){
			// khong lua chon do vat thu i vao trong tui
			dp[i][j] = dp[i - 1][j];
			// co the dua do vat thu i vao trong tui
			if(j >= w[i]){
				dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
			}
		}
	}
	cout << dp[n][s];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
