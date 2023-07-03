#include<bits/stdc++.h>

using namespace std;

int a[100][100], n, vs[100], e[100], q[100];
void DFS(int u) { 
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
		for (int i = 1; i <= n; i++){
			if (vs[i] == 0 && a[v][i] == 1) {
				cq++; q[cq] = i; 
				vs[i] = 1; e[i]= v; 
			}
		}
	}
}

void T_BFS(int a[][100]){
	int u = 1; // gia su dinh bat dau u = 1
	for(int v = 1; v <= n; v++){
		vs[v] = 0;
	}
	BFS(u);
	int dem = 0;
	for(int v = 1; v <= n; v++){
		if(vs[v] == 1) dem++;
	}
	if(dem == n){
		for(int v = 1; v <= n; v++){
			if(e[v] != 0){
				cout <<"(" << v << " " << e[v] << ")" << " ";
			}
		}
	}else{
		cout << "Khong co cay khung";
	}
}

void T_DFS(int a[][100]){
	int u = 1; // gia su dinh bat dau u = 1
	for(int v = 1; v <= n; v++){
		vs[v] = 0;
	}
	DFS(u);
	int dem = 0;
	for(int v = 1; v <= n; v++){
		if(vs[v] == 1) dem++;
	}
	if(dem == n){
		for(int v = 1; v <= n; v++){
			if(e[v] != 0){
				cout <<"(" << v << " " << e[v] << ")" << " ";
			}
		}
	}else{
		cout << "Khong co cay khung";
	}
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
	T_DFS(a);
	cout << endl;
	T_BFS(a);
}

//0 1 1 0
//1 0 0 1
//1 0 0 1
//0 1 1 0

//0 1 0 0 0 0 0 0 1 1
//1 0 1 1 0 0 0 1 1 1
//0 1 0 1 1 0 0 0 0 1
//0 1 1 0 1 1 1 1 0 0
//0 0 1 1 0 1 0 0 0 0
//0 0 0 1 1 0 1 0 0 0
//0 0 0 1 0 1 0 1 0 0
//0 0 0 1 0 0 1 0 1 0
//1 1 0 0 0 0 0 1 0 1
//1 1 1 0 0 0 0 0 1 0
