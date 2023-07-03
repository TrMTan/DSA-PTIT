#include<bits/stdc++.h>

using namespace std;

int v, e, x, y; // v: dinh, e: canh
vector<int> ke[1001]; // luu ds ke
bool visited[1001]; //ktra da tham hay chua

void dfs(int u){
	visited[u] = true;
	for(int v : ke[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}

void lienthong(){
	int kq = 0;
	memset(visited, false, sizeof(visited));
	for(int i = 1; i <= v; i++){
//		dfs(i);
//		for(int j = 1; j <= v; j++){
//			if(!visited[j]){
//				cout << "NO";
//				return;
//			}
//		}
		if(!visited[i]){
			kq++;
			dfs(i);
		}
	}
	if(kq == 1) cout << "YES";
	else cout << "NO";
}

void input(){
	cin >> v >> e;
	for(int i = 1; i <= v; i++){
		ke[i].clear();
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
		lienthong();
		cout << endl;
	}
}
