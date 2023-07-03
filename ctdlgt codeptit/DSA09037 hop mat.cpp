#include<bits/stdc++.h>

using namespace std;

int k, n, m, u, v;
vector<vector<int>> ke;
vector<bool> vs;
vector<int> vt; // vi tri co nguoi dung
vector<int> cnt; // so nguoi co the di qua

void dfs(int u){
	vs[u] = true;
	cnt[u]++;
	for(int v : ke[u]){
		if(!vs[v]){
			dfs(v);
		}
	}
}

void check(){
	cin >> k >> n >> m;
	ke.clear(); ke.resize(n + 1, {});
	cnt.clear(); cnt.resize(n + 1, {});
	vt.clear();
	for(int i = 0; i < k; i++){
		cin >> u;
		vt.push_back(u);
	}
	while(m--){
		cin >> u >> v;
		ke[u].push_back(v);
	}
	for(int u : vt){
		vs.clear(); vs.resize(n + 1, false);
		dfs(u);
	}
	int res = 0;
	for(int i = 1; i <= n; i++){
		if(cnt[i] == k){
			res++;
		}
	}
	cout << res;
}

int main(){
	check();
}
