#include <iostream>
using namespace std;

const int INF = 1e9;
int n, a[100][100], d[100], e[100], vs[100]; 

void DIJKSTRA(int u) {
    for(int v = 1; v <= n; v++){
        d[v] = a[u][v]; e[v] = u; vs[v] = 0; 
    }
    d[u] = 0; e[u] = 0; vs[u] = 1; 
    while(1){
        int t = 0, min = 1e9; 
        for(int v = 1; v <= n; v++){
            if(vs[v] == 0 && d[v] < min){ 
                t = v; min = d[v]; 
            }
        }
        if(t == 0) break; 
        vs[t] = 1; 
        for(int v = 1; v <= n; v++){
            if(vs[v] == 0 && d[v] > d[t] + a[t][v]){ 
                d[v] = d[t] + a[t][v]; 
                e[v] = t; 
            }
        }
    }
    cout << "Khoang cach ngan nhat tu dinh 1 den cac dinh con lai:" << endl;
	for(int v = 2; v <= n; v++){ cout << "Dinh " << v << ": " << d[v] << endl; }
	cout << "Duong di ngan nhat tu dinh 1 den cac dinh con lai:" << endl;
	for(int v = 2; v <= n; v++){
	    cout << "Dinh " << v << ": ";
	    int path[100], pathSize = 0, t = v;
	    while(t != 0){
	        path[pathSize++] = t;
	        t = e[t];
	    }
	    for(int i = pathSize - 1; i >= 0; i--){
	        cout << path[i] << " ";
	    }
	    cout << endl;
	}
}

int main() {
    n = 6; 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] = INF; 
        }
    }
    a[1][1] = 0;
    a[1][2] = 2;
    a[2][2] = 0;
    a[2][3] = 3;
    a[3][3] = 0;
    a[3][4] = 4;
    a[4][4] = 0;
    a[4][5] = 1;
    a[5][1] = 5;
    a[5][5] = 0;
    a[5][6] = 3;
    a[6][1] = 1;
    a[6][2] = 1;
    a[6][3] = 2;
    a[6][4] = 1;
    a[6][6] = 0;
    DIJKSTRA(6); 
    
    return 0;
}

