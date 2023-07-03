#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<int> w, v;
vector<vector<int>> f;
string ans;

void trace(int n, int k){  // in ra phuong an toi uu
	if(n == 0) return;
	if(f[n][k] == f[n - 1][k]){
		trace(n - 1, k);
	}else{
		trace(n - 1, k - w[n]);
		ans[n - 1] = '1'; 
	}
}

void check(){
	cin >> n >> m;
	w.resize(n + 1);
	v.resize(n + 1);
	ans.resize(n, '0'); // gan ans dang 000000
	f.resize(n + 1, vector<int>(m + 1, 0));
	for(int i = 1; i <= n; i++) cin >> v[i];
	for(int i = 1; i <= n; i++) cin >> w[i];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			f[i][j] = f[i - 1][j];
			if(j >= w[i]){
				f[i][j] = max(f[i - 1][j], f[i - 1][j - w[i]] + v[i]);
			}
		}
	}
	cout << f[n][m] << endl;
	trace(n, m);
	for(char i : ans) cout << i << " ";
}

int main(){
	check();
}
