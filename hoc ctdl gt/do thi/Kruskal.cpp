#include<bits/stdc++.h>
using namespace std;

int n, m, d[10000], c[10000], ts[10000];
int vs[100], t[100];
int a[100][100];

void Kruskal(int a[][100]) {
    for (int i = 1; i < m; i++) {
        for (int j = i + 1; j <= m; j++) {
            if (ts[i] > ts[j]) {
                swap(ts[i], ts[j]);
                swap(d[i], d[j]);
                swap(c[i], c[j]);
            }
        }
    }
    int wt = 0, k = 0;
    for (int i = 1; i <= n; i++) {
        vs[i] = 0;
    }
    for (int i = 1; i <= m; i++) {
        if (!(vs[d[i]] != 0 && vs[d[i]] == vs[c[i]])) {
            k++;
            t[k] = i;
            wt += ts[i];
            if (k == n - 1) {
                cout << wt << endl;
                for (int j = 1; j <= k; j++) {
                    cout << d[t[j]] << " " << c[t[j]] << endl;
                }
                return;
            }
            int u = d[i], v = c[i];
            if (vs[u] == 0 && vs[v] == 0) {
                vs[u] = k;
                vs[v] = k;
            } else if (vs[u] == 0 && vs[v] != 0) {
                vs[u] = vs[v];
            } else if (vs[u] != 0 && vs[v] == 0) {
                vs[v] = vs[u];
            } else if (vs[u] < vs[v]) {
                int tg = vs[v];
                for (int j = 1; j <= n; j++) {
                    if (vs[j] == tg) {
                        vs[j] = vs[u];
                    }
                }
            } else if (vs[v] < vs[u]) {
                int tg = vs[u];
                for (int j = 1; j <= n; j++) {
                    if (vs[j] == tg) {
                        vs[j] = vs[v];
                    }
                }
            } else {
                vs[u] == vs[v];
            }
        }
    }
}


int main() {
	n = 10; m = 35;
	for(int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			a[i][j] = 1e9;
		}
	}
	a[1][1] = 0;
	a[1][2] = 4;
	a[1][3] = 1;
	a[1][4] = 1;
	a[1][5] = 2;
	a[1][6] = 9;
	a[1][8] = 5;
	a[1][9] = 4;
	a[1][10] = 7;
	a[2][1] = 4;
	a[2][2] = 0;
	a[2][3] = 2;
	a[2][5] = 9;
	a[2][6] = 1;
	a[2][7] = 5;
	a[2][9] = 6;
	a[3][1] = 1;
	a[3][2] = 2;
	a[3][3] = 0;
	a[3][4] = 7;
	a[3][6] = 6;
	a[3][7] = 6;
	a[3][8] = 1;
	a[3][9] = 1;
	a[3][10] = 9;
	a[4][1] = 1;
	a[4][3] = 7;
	a[4][4] = 0;
	a[4][5] = 1;
	a[4][6] = 7;
	a[4][8] = 6;
	a[5][1] = 2;
	a[5][2] = 9;
	a[5][4] = 1;
	a[5][5] = 0;
	a[5][6] = 3;
	a[5][7] = 4;
	a[5][8] = 3;
	a[5][9] = 1;
	a[5][10] = 2;
	a[6][1] = 9;
	a[6][2] = 1;
	a[6][3] = 6;
	a[6][4] = 7;
	a[6][5] = 3;
	a[6][6] = 0;
	a[6][7] = 3;
	a[6][8] = 1;
	a[6][9] = 1;
	a[6][10] = 5;
	a[7][2] = 5;
	a[7][3] = 6;
	a[7][5] = 4;
	a[7][6] = 3;
	a[7][7] = 0;
	a[7][8] = 4;
	a[7][9] = 5;
	a[8][1] = 5;
	a[8][3] = 1;
	a[8][4] = 6;
	a[8][5] = 3;
	a[8][6] = 1;
	a[8][7] = 4;
	a[8][8] = 0;
	a[8][9] = 4;
	a[8][10] = 2;
	a[9][1] = 4;
	a[9][2] = 6;
	a[9][3] = 1;
	a[9][5] = 1;
	a[9][6] = 1;
	a[9][7] = 5;
	a[9][8] = 4;
	a[9][9] = 0;
	a[9][10] = 4;
	a[10][1] = 7;
	a[10][3] = 9;
	a[10][5] = 2;
	a[10][6] = 5;
	a[10][8] = 2;
	a[10][9] = 4;
	Kruskal(a);
	return 0;
}

//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//const int MAX = 100;
//
//struct Edge {
//    int u, v, weight;
//};
//
//int n, m;
//int dsu[MAX];
//vector<Edge> edges, result;
//
//bool compareEdges(const Edge& e1, const Edge& e2) {
//    return e1.weight < e2.weight;
//}
//
//int findRoot(int v) {
//    while (dsu[v] > 0) {
//        v = dsu[v];
//    }
//    return v;
//}
//
//void unionSets(int u, int v) {
//    int rootU = findRoot(u);
//    int rootV = findRoot(v);
//    if (dsu[rootU] < dsu[rootV]) {
//        dsu[rootU] += dsu[rootV];
//        dsu[rootV] = rootU;
//    } else {
//        dsu[rootV] += dsu[rootU];
//        dsu[rootU] = rootV;
//    }
//}
//
//void kruskal(int a[][MAX]) {
//    for (int i = 1; i <= n - 1; i++) {
//        for (int j = i + 1; j <= n; j++) {
//            if (a[i][j] > 0) {
//                Edge e;
//                e.u = i;
//                e.v = j;
//                e.weight = a[i][j];
//                edges.push_back(e);
//            }
//        }
//    }
//
//    sort(edges.begin(), edges.end(), compareEdges);
//
//    for (int i = 1; i <= n; i++) {
//        dsu[i] = -1;
//    }
//
//    for (const Edge& e : edges) {
//        int rootU = findRoot(e.u);
//        int rootV = findRoot(e.v);
//        if (rootU != rootV) {
//            result.push_back(e);
//            unionSets(rootU, rootV);
//        }
//    }
//}
//
//int main() {
//    cin >> n >> m;
//    int a[MAX][MAX];
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            cin >> a[i][j];
//        }
//    }
//    kruskal(a);
//    int minWeight = 0;
//    for (const Edge& e : result) {
//        minWeight += e.weight;
//    }
//    cout << "Minimum spanning tree weight: " << minWeight << endl;
//    cout << "Edges in minimum spanning tree: " << endl;
//    for (const Edge& e : result) {
//        cout << e.u << " " << e.v << endl;
//    }
//    return 0;
//}

//10 35
//1 3 1
//1 4 1
//2 6 1
//3 8 1
//3 9 1
//4 5 1
//5 9 1
//6 8 1
//6 9 1
//1 5 2
//2 3 2
//5 10 2
//8 10 2
//5 6 3
//5 8 3
//6 7 3
//1 2 4
//1 9 4
//5 7 4
//7 8 4
//8 9 4
//9 10 4
//1 8 5
//2 7 5
//6 10 5
//7 9 5
//2 9 6
//3 6 6
//3 7 6
//4 8 6
//1 10 7
//3 4 7
//4 6 7
//1 6 9
//3 10 9

//13 26
//1 3 1
//1 2 2
//2 3 2
//1 4 3
//3 4 4
//2 6 5
//2 7 5
//3 6 5
//4 5 5
//4 6 5
//5 6 6
//5 10 6
//6 7 6
//6 8 6
//6 9 6
//6 10 6
//7 8 6
//8 9 7
//8 12 7
//8 13 7
//9 10 7
//9 11 7
//10 11 7
//10 12 7
//11 12 8
//12 13 8

//13 
//1 3 1
//1 2 2
//2 3 2
//1 4 3
//3 4 4
//2 6 5
//2 7 5
//3 6 5
//4 5 5
//4 6 5
//5 6 6
//5 10 6
//6 7 6
//6 8 6
//6 9 6
//6 10 6
//7 8 6
//8 9 7
//8 12 7
//8 13 7
//9 10 7
//9 11 7
//10 11 7
//10 12 7
//11 12 8
//12 13 8

