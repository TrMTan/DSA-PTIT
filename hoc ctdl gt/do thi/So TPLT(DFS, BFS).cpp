#include<bits/stdc++.h>

using namespace std;

int a[100][100], n, vs[100], e[100], q[100];
void DFS(int u) { 
//	cout << u << " ";
//	cout << u << "(" << e[u] << ")" << " ";
	vs[u] = 1; 
	for (int v = 1; v <= n; v++){
		if(vs[v] == 0 && a[u][v] == 1){ 
			e[v] = u; 
			DFS(v);
		}
	}
}

void BFS(int u){ 
	int v, dq = 1, cq = 0; 
	cq++; q[cq] = u; vs[u] = 1;
	while (dq <= cq){ 
		v = q[dq]; dq++; 
//		cout << v << " ";
//		cout << v << "(" << e[v]  << ")" << " ";
		for (int i = 1; i <= n; i++){
			if (vs[i] == 0 && a[v][i] == 1) {
				cq++; q[cq] = i; 
				vs[i] = 1; e[i]= v; 
			}
		}
	}

}

int TPLT_DFS(int a[100][100]){
	int stplt = 0;
	for(int i = 1; i <= n; i++){
		vs[i]= 0;
	} 
	for(int i = 1; i <= n; i++){
		if(vs[i] == 0){
			DFS(i);
			stplt++;
		}
	}
	return stplt;
}

int TPLT_BFS(int a[100][100]){
	int stplt = 0;
	for(int i = 1; i <= n; i++){
		vs[i]= 0;
	} 
	for(int i = 1; i <= n; i++){
		if(vs[i] == 0){
			BFS(i);
			stplt++;
		}
	}
	return stplt;
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	memset(vs, 0, sizeof(vs));
	memset(e, 0, sizeof(e));
	int kq = TPLT_DFS(a);
	int kq1 = TPLT_BFS(a);
	cout << kq << " " << kq1;
}

//0 0 0 1 0 0 0 0 1 1
//0 0 0 1 1 0 0 0 0 0
//0 0 0 0 0 1 1 0 0 0
//1 1 0 0 1 0 0 0 0 0
//0 1 0 1 0 0 0 0 0 0
//0 0 1 0 0 0 1 0 0 0
//0 0 1 0 0 1 0 0 0 0
//0 0 0 0 0 0 0 0 1 1
//1 0 0 0 0 0 0 1 0 1
//1 0 0 0 0 0 0 1 1 0


