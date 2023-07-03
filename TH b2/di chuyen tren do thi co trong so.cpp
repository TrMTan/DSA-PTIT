#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int n, m, q, d[1005][1005];

void floyd(){
	for(int k = 1; k <= n; k++){
		for(int u = 1; u <= n; u++){
			for(int v = 1; v <= n; v++){
				d[u][v] = min(d[u][v], max(d[u][k], d[k][v]));
			}
		}
	}
}

int main(){
	cin >> n >> m >> q;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i == j) d[i][j] = 0;
			else d[i][j] = d[j][i] = 1e9;
		}
	}
	for(int i = 0; i < m; i++){
		int x, y, w;
		cin >> x >> y >> w;
		d[x][y] = w;
	}
	floyd();
	while(q--){
		int x, y;
		cin >> x >> y;
		if(d[x][y] == 1e9) cout << -1;
		else cout << d[x][y];
		cout << endl;
	}
}
