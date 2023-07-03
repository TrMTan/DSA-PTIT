#include<bits/stdc++.h>

using namespace std;

int v, e, x, y; //v: dinh, e: canh
vector<int> ke[1001]; // luu ds ke
bool visited[1001]; // ktra da duoc tham hay chua

void input(){
	cin >> v >> e;
	for(int i = 1; i <= v; i++){
		ke[i].clear();
	}
	while(e--){
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}

void bfs(int u){
	//buoc ktao
	queue<int> q;
	q.push(u);
	visited[u] = true;
	//buoc lap
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

void dinhtru(){
	int stplt = 0; // dem so tplt
	memset(visited, false, sizeof(visited));
	for(int i = 1; i <= v; i++){
		if(!visited[i]){
			++stplt;
			bfs(i);
		}
	}
	for(int i = 1; i <= v; i++){
		// loai bo dinh i ra khoi do thi
		memset(visited, false, sizeof(visited));
		visited[i] = true;
		int dem = 0; // dem sotplt sau khi loai bo dinh i ra khoi do thi
		for(int j = 1; j <= v; j++){
			if(!visited[j]){
				++dem;
				bfs(j);
			}
		}
		if(dem > stplt){
			cout << i << " ";
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		input();
		dinhtru();
		cout << endl;
	}
}

