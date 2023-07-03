#include<bits/stdc++.h>

using namespace std;

int v, e, u, x, y; // v: dinh, e: canh, u: dinh xuat phat
vector<int> ke[1001]; // luu ds ke
bool visited[1001]; // kiem tra 1 dinh da dc tham hay chua

void bfs(int u){
	// buoc khoi tao
	queue<int> q;
	q.push(u);
	visited[u] = true;
	// buoc lap
	while(!q.empty()){
		int v = q.front(); //lay dinh o dau hang doi
		q.pop();
		cout << v << " ";
		for(int x : ke[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
			}
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
	}
}

int main(){
	int t; 
	cin >> t;
	while(t--){
		input();
		bfs(u);
		cout << endl;
	}
}
