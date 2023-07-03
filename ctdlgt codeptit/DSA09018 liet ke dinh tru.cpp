#include<bits/stdc++.h>

using namespace std;

int v, e, x, y; // v:  dinh, e: canh
vector<int> ke[1001]; // luu ds ke
bool visited[1001]; // ktra da tham hay chua

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

void dfs(int u){
	visited[u] = true;
	for(int v : ke[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}

void dinhtru(){
	int stplt = 0; // dem so tplt;
	memset(visited, false, sizeof(visited));
	for(int i = 1; i <= v; i++){
		if(!visited[i]){
			stplt++;
			dfs(i);
		}
	}
	for(int i = 1; i <= v; i++){
		// loai bo dinh i ra khoi do thi
		memset(visited, false, sizeof(visited));
		visited[i] = true;
		int dem = 0; //dem stplt sau khi loai dinh i ra khoi do thi
		for(int j = 1; j <= v; j++){
			if(!visited[j]){
				dem++;
				dfs(j);
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
