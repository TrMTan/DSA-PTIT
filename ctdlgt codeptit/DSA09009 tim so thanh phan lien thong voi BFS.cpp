#include<bits/stdc++.h>

using namespace std;

int v, e, x, y; //v: dinh, e: canh
vector<int> ke[1001]; // luu ds ke
bool visited[1001]; // ktra da tham hay chua

void bfs(int u){
	// buoc khoi tao
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()){
		int v = q.front(); q.pop();
//		cout << v << " ";
		for(int x : ke[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
			}
		}
	}
}

void lienthong(){
	int kq = 0;
	memset(visited, false, sizeof(visited));
	for(int i = 1; i <= v; i++){
		if(!visited[i]){
			kq++;
//			cout << "Cac dinh thuoc thanh phan lien thong thu: " << kq << endl;
			bfs(i);
//			cout << endl;
		}
	}
//	cout << "So thanh phan lien thong: ";
	cout << kq;
}

void input(){
	// chuyen sang danh sach ke
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

int main(){
	int t; cin >> t;
	while(t--){
		input();
		lienthong();
		cout << endl;
	}
}

