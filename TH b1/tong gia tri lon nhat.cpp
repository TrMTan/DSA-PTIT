#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, M;
	cin >> n >> M;
	vector<int> w(n + 1); // trong luong
	vector<int> v(n + 1); // gia tri
	for(int i = 1; i <= n; i++){
		cin >> w[i] >> v[i];
	}
	vector<vector<int>> f(n + 1, vector<int>(M + 1));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= M; j++){
			if(j >= w[i]){
				f[i][j] = max(f[i - 1][j], f[i - 1][j - w[i]] + v[i]);
			}else{
				f[i][j] = f[i - 1][j];
			}
		}
	}
	cout << f[n][M];
}

int main(){
	check();
}
