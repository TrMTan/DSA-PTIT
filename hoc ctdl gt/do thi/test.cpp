#include<bits/stdc++.h>

using namespace std;

int v, c[100][100], vs[100], e[100], f[100][100], g[100][100], valF = 0;
void input () {
    ifstream fileIn;
    fileIn.open("DT.INP", ios::in);
    int a[10000];
    int k = 0, x;
    while (fileIn >> x) a[k++] = x;
    v = sqrt(k);
    k = 0;
    for (int i = 1; i <= v; i++)
       for (int j = 1; j <= v; j++)
            c[i][j] = g[i][j] = a[k++];
    fileIn.close();
}

int FindPath_BFS() {
    for (int i = 1; i <= v; i++) vs[i] = 0;
    queue<int> q;
    q.push(1);
    vs[1] = 1;
    while (q.size()) {
        int u = q.front(); q.pop();
        for (int i = 1; i <= v; i++) {
            if (!vs[i] && g[u][i] > 0) {
                q.push(i);  
                e[i] = u;
                vs[i] = 1;
            }
        }
    }
    return vs[v];
}

void Increase_Flow () {
    while (FindPath_BFS()) {
        int Delta = INT_MAX;
        int u = v;
        while (u != 1) {
        Delta = min(Delta, g[e[u]][u]);
        u = e[u];
    	}
    u = v;
    while (u != 1) {
        f[e[u]][u] += Delta;
        g[e[u]][u] = c[e[u]][u] - f[e[u]][u];
        g[u][e[u]] = -f[e[u]][u];
        u = e[u];
    }
    valF += Delta;
    }
}

void output() {
    ofstream fileOut;
    fileOut.open("DT.OUT", ios::out);
    fileOut << valF << '\n';
    for (int i = 1; i <= v; i++) {
        for (int j = 1; j <= v; j++) {
            fileOut << f[i][j] << ' ';
        }
        fileOut << '\n';
    }
    fileOut.close();
}

int main(){
    input();
    FindPath_BFS();
    Increase_Flow ();
    output();
}
