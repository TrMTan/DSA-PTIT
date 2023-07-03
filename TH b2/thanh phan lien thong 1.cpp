#include<bits/stdc++.h>

using namespace std;

int n, m, x;
int ke[1005][1005];
bool visited[1005];
int bf[1005];

void DFS(int u){
	visited[u] = true;
	for(int i = 1; i <= n; i++){
		if(ke[u][i] && !visited[i]){
			bf[i] = u;
			DFS(i);
		}
	}
}

void check(){
	cin >> n >> m >> x;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		ke[x][y] = ke[y][x] = 1;
	}
	for(int i = 1; i <= n; i++){
		visited[i] = false;
	}
	DFS(x);
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(bf[i] == 0 && i != x){
			dem++;
			cout << i << endl;
		}
	}
	if(dem == 0) cout << "0";
}

int main(){
	check(); 
	cout << endl;
}

