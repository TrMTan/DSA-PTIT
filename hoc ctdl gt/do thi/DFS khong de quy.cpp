#include<bits/stdc++.h>

using namespace std;

int v, e, u, x, y; // v: dinh, e: canh, u: dinh xuat phat
vector<vector<int>> ke; // luu ds ke
vector<bool> vs; // kiem tra 1 dinh da dc tham hay chua

void DFS(int u){
	stack<int> st;
	st.push(u);
	while(!st.empty()){
		int u = st.top();
		st.pop();
		if(vs[u] == false){
			cout << u << " ";
			vs[u] = true;
		}
		for(int v : ke[u]){
			if(vs[v] == false){
				st.push(u);
				st.push(v);
				break;
			}
		}
	}
}

void ip(){
	cin >> v >> e >> u; 
	ke.clear(); ke.resize(v + 1);
	vs.clear(); vs.resize(v + 1, 0);
	for(int i = 1; i <= v; i++){
		ke[i].clear();
	}
	while(e--){ // nhap vao danh sach canh
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x); // neu do thi co huong thi xoa dong nay la duoc  
	}
}

int main(){
	ip();
	DFS(u);
}
