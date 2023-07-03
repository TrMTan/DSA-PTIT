#include<bits/stdc++.h>

using namespace std;

int v, e, x, y;
vector<int> ke[1001];
bool visited[1001];

void DFS(int u){
	visited[u] = true;
	for(int &v : ke[u]){
		if(!visited[v]){
			DFS(v);
		}
	}
}

void check(){
	cin >> v >> e;
	while(e--){
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	int k = 0;
	for(int i = 1; i <= v; i++){
		if(!visited[i]){
			k++; DFS(i);
		}
	}
	int res = 1e9;
	for(int i = 1; i <= v; i++){
		int cnt = 0;
		memset(visited, false, sizeof(visited));
		visited[i] = true;
		for(int j = 1; j <= v; j++){
			if(!visited[j]){
				cnt++;
				DFS(j);
			}
			if(cnt > k){
				res = i; k = cnt;
			}
		}
	}
	if(res == 1e9){
		cout << 0;
	}else{
		cout << res;
	}
	for(int i = 1; i <= v; i++){
		ke[i].clear();
		memset(visited, false, sizeof(visited));
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}


