#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, m;
	cin >> n >> m;
	int a[505][505] = {};
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	int ans = 0;
	int f[505][505] = {};
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] == 0){
				f[i][j] = 0;
			}else{
				f[i][j] = min({f[i][j - 1], f[i - 1][j], f[i - 1][j - 1]}) + 1;
			}
			ans = max(ans, f[i][j]);
		}
	}
	cout << ans;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
