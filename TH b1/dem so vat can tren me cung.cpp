#include<bits/stdc++.h>

using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int n, m, kq = 0;
vector<string> a;

void dfs(int i, int j){
	a[i][j] = '.';
	for(int k = 0; k < 4; k++){
		int x = i + dx[k];
		int y = j + dy[k];
		if(x >= 0 && x < n && y >= 0 && y < m && a[x][y] == '#'){
			dfs(x, y);
		}
	}
}

int main(){
	cin >> n >> m;
	a.resize(n);
	for(string &i : a) cin >> i;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == '#'){
				++kq;
				dfs(i, j);
			}
		}
	}
	cout << kq;
}

