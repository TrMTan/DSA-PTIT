#include<bits/stdc++.h>

using namespace std;

//qhd
void check(){
	int n, k = 0; 
	cin >> n;
	int a[105] = {0};
	for(int i = 0; i < n; i++){
		cin >> a[i];
		k += a[i];
	}
	if(k % 2 == 1){
		cout << "NO";
	}else{
		int s = k / 2;
		int dp[s + 1] = {0};
		dp[0] = 1;
		for(int i = 0; i < n; i++){
			for(int j = s; j >= a[i]; j--){
				if(dp[j - a[i]] == 1) dp[j] = 1;
			}
		}
		if(dp[s] == 1) cout << "YES";
		else cout << "NO";
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); 
	}
}
