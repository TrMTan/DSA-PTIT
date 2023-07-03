#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	int a[n + 1], dp[n + 1] = {0};
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		if(i == 1) dp[i] = a[i];
		if(i >= 2) dp[i] = max(dp[i - 1], dp[i - 2] + a[i]); 
	}
	cout << *max_element(dp + 1, dp + n + 1);
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
