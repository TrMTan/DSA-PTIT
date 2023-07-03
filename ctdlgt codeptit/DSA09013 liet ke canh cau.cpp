#include<bits/stdc++.h>

using namespace std;

int v, e, x, y; //v: dinh, e: canh
vector<int> ke[1001]; // luu ds ke
bool visited[1001]; // ktra da duoc tham hay chua
vector<pair<int, int>> dscanh;

void bfs(int u){
	//buoc ktao
	queue<int> q;
	q.push(u);
	visited[u] = true;
	// buoc lap
	while(!q.empty()){
		int v = q.front(); q.pop();
		for(int x : ke[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
			}
		}
	}
}

void bfs2(int u, int s, int t){
	visited[u] = true;
	for(int v : ke[u]){
		if((u == s && v == t) || (u == t && v == s)) continue;
		if(!visited[v]) bfs2(v, s, t);
	}
}

void canhcau(){
	int stplt = 0; // dem so tplt
	memset(visited, false, sizeof(visited));
	for(int i = 1; i <= v; i++){
		if(!visited[i]){
			stplt++;
			bfs(i);
		}
	}
	for(auto it : dscanh){
		int x = it.first, y = it.second;
		// loai bo canh (x, y) ra khoi do thi nhung van du lai cac dinh
		memset(visited, false, sizeof(visited));
		int dem = 0;
		for(int j = 1; j <= v; j++){
			if(!visited[j]){
				dem++;
				bfs2(j, x, y);
			}
		}
		if(dem > stplt){
			cout << x << " " << y << " ";
		}
	}
}

void input(){
	cin >> v >> e;
	for(int i = 1; i <= v; i++){
		ke[i].clear();
	}
	dscanh.clear(); dscanh.resize(e + 1);
	while(e--){
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
		dscanh.push_back({x, y});
	}
}


int main(){
	int t; cin >> t;
	while(t--){
		input();
		canhcau();
		cout << endl;
	}
}

