#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, m;
	cin >> n >> m;
	vector<vector<int>> a(n + 1, vector<int>(m + 1));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}	
	vector<vector<long long>> f(n + 1, vector<long long>(m + 1, 1e9));
	f[0][0] = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			f[i][j] = min({f[i][j - 1], f[i - 1][j], f[i - 1][j - 1]}) + a[i][j];
		}
	}
	cout << f[n][m];
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); 
		cout << endl;
	}
}
