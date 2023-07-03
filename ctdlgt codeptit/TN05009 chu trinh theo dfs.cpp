#include<bits/stdc++.h>

using namespace std;

int n, m, x, y;
vector<vector<int>> ke;
vector<int> ans;
vector<bool> vs;

void dfs(int u, int pre, vector<int> path){ // pre la dinh ke vs dinh xet, path de luu dinh tao chu trinh
	vs[u] = true;
	for(int v : ke[u]){
		if(v == 1 && v != pre && ans.empty()){
			path.push_back(v);
			ans = path;
			return;
		}
		if(!vs[v]){
			path.push_back(v);
			dfs(v, u, path);
			path.pop_back();
		}
	}
}

void check(){
	cin >> n >> m;
	ke.clear(); ke.resize(n + 1, {});
	vs.clear(); vs.resize(n + 1, false);
	ans.clear();
	while(m--){
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(auto &i : ke){
		sort(i.begin(), i.end());
	}
	dfs(1, -1, {1});
	if(ans.empty()){
		cout << "NO";
	}else{
		for(int i : ans){
			cout << i << " ";
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
