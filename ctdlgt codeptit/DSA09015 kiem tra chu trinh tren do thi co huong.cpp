#include<bits/stdc++.h>

using namespace std;

int v, e, x, y;

vector<int> ke[1001];
int vs[1001]; // 3 trang thai 

bool dfs(int u){
	vs[u] = 1; // trang thai 1: bat dau tham
	for(int v : ke[u]){
		if(vs[v] == 0){  // trang thai 2: chua dc tham
			if(dfs(v)) return true;
		}else if(vs[v] == 1) return true;
	}
	vs[u] = 2; // da duuoc tham
	return false;
}

void check(){
	cin >> v >> e;
	for(int i = 1; i <= v; i++){
		ke[i].clear();
	}
	while(e--){
		cin >> x >> y;
		ke[x].push_back(y);
	}
	memset(vs, 0, sizeof(vs));
	for(int i = 1; i <= v; i++){
		if(vs[i] == 0){
			if(dfs(i)){
				cout << "YES";
				return;
			}
		}
	}
	cout << "NO";
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
