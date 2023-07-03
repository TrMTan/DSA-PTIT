#include<bits/stdc++.h>

using namespace std;

int v, e, x, y;

vector<int> ke[1001];
bool vs[1001];
int parent[1001];

bool dfs(int u){
	vs[u] = true;
	for(int v : ke[u]){
		if(!vs[v]){
			parent[v] = u;
			if(dfs(v)) return true;
		}else if(v != parent[u]) return true;
	}
	return false;
}

void check(){
	cin >> v >> e;
	for(int i = 1; i <= v; i++){
		ke[i].clear();
	}
	while(e--){
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	memset(vs, false, sizeof(vs));
	for(int i = 1; i <= v; i++){
		if(!vs[i]){
			if(dfs(i)){
				cout << "YES";
				return;
			}
		}
	}
	cout << "NO";
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
