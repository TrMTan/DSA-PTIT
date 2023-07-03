#include<bits/stdc++.h>

using namespace std;

int n, m, x, y, res;
vector<vector<int>> ke;
vector<bool> vs;

void bfs(int u){
	int length = 1;
	queue<int> q;
	q.push(u);
	vs[u] = true;
	while(!q.empty()){
		int v = q.front(); q.pop();
		for(int i : ke[v]){
			if(!vs[i]){
				length++;
				q.push(i);
				vs[i] = true;
			}
		}
	}
	res = max(res, length);
}

void check(){
	res = 0;
	cin >> n >> m;
	ke.clear(); ke.resize(n + 1, {});
	vs.clear(); vs.resize(n + 1, false);
	while(m--){
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(int i = 1; i <= n; i++){
		if(!vs[i]){
			bfs(i);
		}
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
