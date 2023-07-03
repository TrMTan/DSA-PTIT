#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, m;
	cin >> n >> m;
	vector<int> w(n + 1), v(n + 1);
	for(int i = 1; i <= n; i++) cin >> w[i];
	for(int i = 1; i <= n; i++) cin >> v[i];
	vector<vector<int>> f(n + 1, vector<int>(n + 1, 0));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			f[i][j] = f[i - 1][j];
			if(j >= w[i]){
				f[i][j] = max(f[i][j], f[i - 1][j - w[i]] + v[i]);
			}
-		}
	}
	cout << f[n][m];
}

int main(){
	int t;  cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
