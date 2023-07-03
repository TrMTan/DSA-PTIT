#include<bits/stdc++.h>

using namespace std;

int v, e, s, t; // v: dinh, e: canh, s:dinh dau, t:dinh cuoi
vector<int> ke[1001]; // luu ds ke
bool visited[1001];	// ktra da tham hay chua
int parent[1001];	// ktra cha cua phan tu

void dfs(int u){
	visited[u] = true;
	for(int v : ke[u]){
		if(!visited[v]){
			// ghi nhan cha cua v la u;
			parent[v] = u;
			dfs(v);
		}
	}
}

void duongdi(int s, int t){
	memset(visited, false, sizeof(visited));
	memset(parent, 0, sizeof(parent));
	dfs(s);
	if(!visited[t]){
		cout << "-1";
		return;
	}else{
		// truy vet duong di
		vector<int> way;
		while(t != s){
			way.push_back(t);
			//lan nguoc lai
			t = parent[t];
		}
		way.push_back(s);
		reverse(way.begin(), way.end());
		for(int x : way){
			cout << x << " ";
		}
	}
}

void check(){
	cin >> v >> e >> s >> t;
	for(int i = 1; i <= v; i++){
		ke[i].clear();
	}
	for(int i = 0; i < e; i++){
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
	}
	duongdi(s, t);
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); 
		cout << endl;
	}
}
