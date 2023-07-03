#include<bits/stdc++.h>

using namespace std;

int v, e, s, t; //v: dinh, e: canh, t: dinh bau dau, s: dinh ket thuc
vector<int> ke[1001]; // luu ds ke
bool visited[1001]; // ktra da tham hay chua
int parent[1001]; //ktra cha cua phan tu

void bfs(int u){
	// ktao
	queue<int> q;
	q.push(u);
	visited[u] = true;
	//buoc lap
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int x : ke[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
				parent[x] = v;
			}
		}
	}
}

void duongdi(int s, int t){
	memset(visited, false, sizeof(visited));
	memset(parent, 0, sizeof(parent));
	bfs(s);
	if(!visited[t]){
		cout << "-1"; return;
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
	for(int i = 0; i < v; i++){
		ke[i].clear();
	}
	for(int i = 0; i < e; i++){
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
	}
	duongdi(s, t);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
