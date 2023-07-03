#include<bits/stdc++.h>

using namespace std;

int v, e, x, y;
vector<vector<int>> ke;

void check(){
	cin >> v >> e;
	ke.clear(); ke.resize(v + 1);
	while(e--){
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	int cnt = 0;
	for(int i = 1; i <= v; i++){
		cnt += (ke[i].size() % 2 == 1); // dem so dinh bac le
	}
	if(cnt == 0) cout << 2; // 0 co dinh nao bac le thi la chu trinh
	else if(cnt == 2) cout << 1; // co dinh bac le la duong di
	else cout << 0;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
