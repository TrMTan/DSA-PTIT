#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;
const int INF = 1e9; 

int n, c[MAX][MAX], f[MAX][MAX], parent[MAX]; 

bool bfs(int s, int t) {
    bool visited[MAX] = {false};
    queue<int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v = 1; v <= n; v++) {
            if (!visited[v] && c[u][v] > 0) {
                q.push(v);
                parent[v] = u;
                visited[v] = true;
            }
        }
    }
    return visited[t]; 
}

int fordFulkerson(int s, int t) {
    int maxFlow = 0;	
    while (bfs(s, t)) {
        int path_flow = INF;
        for (int v = t; v != s; v = parent[v]) {
            int u = parent[v];
            path_flow = min(path_flow, c[u][v]);
        }
        for (int v = t; v != s; v = parent[v]) {
            int u = parent[v];
            c[u][v] -= path_flow;
            c[v][u] += path_flow;
            f[u][v] += path_flow;
        }

        maxFlow += path_flow;
    }
    return maxFlow;
}

int main() {
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    cin >> n; // n 
    int s = 1; 
    int t = n; 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> c[i][j];
        }
    }
    int maxFlow = fordFulkerson(s, t);
    cout << "Val(f): " << maxFlow << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << f[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

