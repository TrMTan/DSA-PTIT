#include<bits/stdc++.h>

using namespace std;

int u[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int v[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
	int t; cin >> t;
	while(t--){
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		map<pair<int, int>, int> d;
		int n; cin >> n;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			int l, r;
			cin >> l >> r;
			for(int i = l; i <= r; i++){
				d[{x, i}] = 1e9;
			}
		}
		queue<pair<int, int>> q;
		q.push({x1, y1});
		d[{x1, y1}] = 0;
		while(!q.empty()){
			int i = q.front().first;
			int j = q.front().second;
			q.pop();
			for(int z = 0; z < 8; z++){
				int i1 = i + u[z];
				int j1 = j + v[z];
				if(d.count({i1, j1}) && d[{i1, j1}] == 1e9){
					d[{i1, j1}] = d[{i, j}] + 1;
					q.push({i1, j1});
				}
			}
		}
		if(d[{x2, y2}] = 1e9){
			cout << -1 << endl;
		}else{
			cout << d[{x2, y2}] << endl;
		}
	}
}
