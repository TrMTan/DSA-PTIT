#include<bits/stdc++.h>

using namespace std;

int n, m, u, x, y;
vector<vector<int>> ke;
vector<pair<int, int>> tree;
vector<bool> vs;

void treedfs(int u){
	stack<int> st;
	st.push(u);
	vs[u] = true;
	while(!st.empty()){
		int v = st.top(); st.pop();
		for(int i : ke[v]){
			if(!vs[i]){
				tree.push_back({v, i});
				st.push(v);
				st.push(i);
				vs[i] = true;
				break;
			}
		}
	}
}

void check(){
	cin >> n >> m >> u;
	ke.clear(); ke.resize(n + 1, {});
	vs.clear(); vs.resize(n + 1, false);
	tree.clear();
	while(m--){
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	treedfs(u);
	if(tree.size() != n - 1){
		cout << -1;
		return;
	}
	for(int i = 1; i <= n; i++){
		if(!vs[i]){
			cout << -1;
			return;
		}
	}
	for(auto i : tree){
		cout << i.first << " " << i.second << endl;
 	}
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}

