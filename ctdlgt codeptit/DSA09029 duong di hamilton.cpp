#include<bits/stdc++.h>

using namespace std;

int v, e, x, y, ok;
vector<vector<int>> ke;
vector<bool> vs;

void dfs(int u, int dem){
	if(dem == v) ok = true;
	if(ok) return;
	for(int v : ke[u]){
		if(!vs[v]){
			vs[v] = true;
			dfs(v, dem + 1);
			vs[v] = false;
		}
	}
}

void check(){
	ok = 0;
	cin >> v >> e;
	ke.clear();
	ke.resize(v + 100, {});
	while(e--){
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(int i = 1; i <= v; i++){
		vs.clear();
		vs.resize(v + 100, false);
		vs[i] = true;
		dfs(i, 1);
		if(ok) break;
	}
	cout << (ok ? 1 : 0);
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
