#include<bits/stdc++.h>

using namespace std;

int v, e, u, x, y; // v: dinh, e: canh, u: dinh xuat phat
vector<int> ke[1001]; // luu ds ke
bool visited[1001]; // kiem tra 1 dinh da dc tham hay chua

void dfs(int u){
	visited[u] = true; // danh dau u da dc tham
	cout << u << " ";
	for(int v : ke[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}

void input(){
	// chuyen sang danh sach ke
	cin >> v >> e >> u;
	for(int i = 1; i <= v; i++){
		ke[i].clear();
		memset(visited, false, sizeof(visited));
	}
	while(e--){
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}

int main(){
	int t; 
	cin >> t;
	while(t--){
		input();
		dfs(u);
		cout << endl;
	}
}
