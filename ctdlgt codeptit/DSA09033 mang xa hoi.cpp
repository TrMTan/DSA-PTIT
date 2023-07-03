#include<bits/stdc++.h>

using namespace std;

int n, m, x, y;
vector<vector<int>> ke;
vector<bool> vs;

void dfs(int u){
	vs[u] = true;
	for(int v : ke[u]){
		if(!vs[v]){
			dfs(v);
		}
	}
}

void check(){
	cin >> n >> m;
	ke.clear(); ke.resize(n + 1, {});
	vs.clear(); vs.resize(n + 1, false);
	while(m--){
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	dfs(1);
	for(int i = 2; i <= n; i++){
		if(!vs[i]){
			cout << "NO";
			return;
		}
	}
	cout << "YES";
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
