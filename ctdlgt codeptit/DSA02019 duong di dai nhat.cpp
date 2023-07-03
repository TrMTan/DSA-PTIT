#include<bits/stdc++.h>

using namespace std;

int n, m, x, y, res;
vector<vector<int>> ke;
bool vs[20][20] = {};

void dfs(int u, int len){
	res = max(res, len);
	for(int v : ke[u]){
		if(!vs[u][v]){
			vs[u][v] = vs[v][u] = true;
			dfs(v, len + 1);
			vs[u][v] = vs[v][u] = false;
		}
	}
}

void check(){
	res = 0;
	cin >> n >> m;
	ke.clear(); ke.resize(20);
	while(m--){
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(int i = 0; i < n; i++){
		dfs(i, 0);
	}
	cout << res;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
