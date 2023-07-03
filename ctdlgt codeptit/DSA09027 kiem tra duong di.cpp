#include<bits/stdc++.h>
using namespace std;

int V, E, q, u, v, x, y;
vector<vector<int>> ke;
vector<bool> visited;

void bfs(int start) {
    visited.clear(); visited.resize(V + 1, 0);
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        u = q.front(); q.pop();
        for (int v : ke[u]) {
            if (visited[v] == false) {
                q.push(v);
                visited[v] = true;
            }
        }
    }
}

void check() {
    cin >> V >> E;
    ke.clear(); ke.resize(V + 1);
    for (int i = 1; i <= E; ++i) {
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
    cin >> q;
    while (q--) {
        cin >> x >> y;
        bfs(x);
        cout << (visited[y] ? "YES" : "NO") << endl;
    }
}

int main() {
    int t; cin >> t;
    while(t--){
    	check();
    	cout << endl;
	}
}
