#include<bits/stdc++.h>

using namespace std;

int m, n, a[1005][1005], dp[1005][1005]; //dp luu so buoc di


int bfs(){
	
	queue<pair<int, int>> q;
	q.push({1, 1});
	dp[1][1] = 0;
	while(!q.empty()){
		int u = q.front().first;
		int v = q.front().second;
		q.pop();
		if(u == m && v == n) return dp[u][v];
		int nextu = u + a[u][v];
		int nextv = v + a[u][v];
		if(nextu <= m && !dp[nextu][v]){
			dp[nextu][v] = dp[u][v] + 1;
			q.push({nextu, v});
		}
		if(nextv <= n && !dp[u][nextv]){
			dp[u][nextv] = dp[u][v] + 1;
			q.push({u, nextv});
		}
	}
	return -1;
}

void check(){
	cin >> m >> n;
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
			dp[i][j] = 0;
		}
	}
	cout << bfs();
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
