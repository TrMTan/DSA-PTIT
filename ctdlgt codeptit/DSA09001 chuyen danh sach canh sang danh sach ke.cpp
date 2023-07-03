#include<bits/stdc++.h>

using namespace std;

//v la so dinh, e la so canh
// x la dinh dau, y la dinh cuoi
void check(){
	int v, e, x, y;
	vector<int> g[1001];
	cin >> v >> e;
	while(e--){
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	for(int i = 1; i <= v; i++){
		cout << i << ": ";
		for(int x : g[i]) cout << x << " ";
		cout << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
