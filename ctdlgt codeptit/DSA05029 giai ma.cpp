#include<bits/stdc++.h>

using namespace std;

void check(){
	string s; cin >> s;
	if(s[0] == '0'){
		cout << 0 << endl;
		return;
	}
	int dp[1005]; // so cach ma hoa den ky tu i
	dp[0] = dp[1] = 1;
	// neu s(i - 1) == 1 luon ghep dc vs so cach la dp[i - 1]
	// neu s(i - 1) != 1 thi de ghep dc vs s[i] thi so phai la 2
	// neu s(i - 1) == 2 muon ghep dc vs s[i] thi s[i] <= '6'
	for(int i = 2; i <= s.length(); i++){
		dp[i] = 0;
		if(s[i - 1] > '0'){
			dp[i] += dp[i - 1];
		}
		if(s[i - 2] == '1' || s[i - 2] == '2' && s[i - 1] <= '6'){
			dp[i] += dp[i - 2];
		}
	}
	cout << dp[s.length()];
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
