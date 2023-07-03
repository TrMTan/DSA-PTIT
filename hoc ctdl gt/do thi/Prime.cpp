#include<bits/stdc++.h>

using namespace std;

const int INF = 1e9;
int n, a[100][100];
int vs[100], d[100], e[100];

void Prim(int a[][100], int u) {
	for(int v = 1; v <= n; v++){
		vs[v] = 0; 
		d[v] = a[u][v]; 
		e[v]= u;
	}
	vs[u] = 1; 
	d[u] = 0; 
	e[u] = 0; 
	int wt = 0, dem = 1; 
	while (dem < n){ 
		int s = 0; 
		int min = INF;
		for(int v = 1; v <= n; v++){
			if (vs[v] == 0 && d[v] < min){
				min = d[v]; 
				s = v;
			}
		}
		if(s == 0){
			cout << "Khong co cay khung"; 
			return;
		}
		vs[s] = 1; 
		wt = wt + d[s];
		for (int v = 1; v <= n; v++){
			if(vs[v] == 0 && d[v] > a[s][v]){ 
				d[v] = a[s][v]; 
				e[v] = s; 
			}
		}
		dem++;
	} 
	cout << wt << endl;
	for (int v = 1; v <= n; v++){
		if(e[v] != 0){
			cout << v << " " << e[v] << endl;
		}
	}
}

int main(){
	n = 10;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			a[i][j] = INF;
		}
	}
	a[1][1] = 0;
	a[1][2] = 6;
//	a[1][3] = 1;
//	a[1][4] = 1;
//	a[1][5] = 2;
	a[1][6] = 1;
//	a[1][8] = 5;
	a[1][9] = 4;
	a[1][10] = 5;
	a[2][1] = 6;
	a[2][2] = 0;
	a[2][3] = 6;
	a[2][5] = 6;
//	a[2][6] = 1;
//	a[2][7] = 5;
//	a[2][9] = 6;
	a[2][10] = 5;
//	a[3][1] = 1;
	a[3][2] = 6;
	a[3][3] = 0;
	a[3][4] = 7;
	a[3][5] = 7;
//	a[3][6] = 6;
//	a[3][7] = 6;
//	a[3][8] = 1;
//	a[3][9] = 1;
//	a[3][10] = 9;
//	a[4][1] = 1;
	a[4][3] = 7;
	a[4][4] = 0;
//	a[4][5] = 1;
	a[4][6] = 1;
//	a[4][8] = 6;
//	a[5][1] = 2;
	a[5][2] = 6;
	a[5][3] = 7;
//	a[5][4] = 1;
	a[5][5] = 0;
	a[5][6] = 1;
//	a[5][7] = 4;
//	a[5][8] = 3;
//	a[5][9] = 1;
//	a[5][10] = 2;
	a[6][1] = 1;
//	a[6][2] = 1;
//	a[6][3] = 6;
	a[6][4] = 1;
	a[6][5] = 1;
	a[6][6] = 0;
	a[6][7] = 1;
//	a[6][8] = 1;
//	a[6][9] = 1;
//	a[6][10] = 5;
//	a[7][2] = 5;
//	a[7][3] = 6;
//	a[7][5] = 4;
	a[7][6] = 1;
	a[7][7] = 0;
	a[7][8] = 2;
	a[7][9] = 2;
//	a[8][1] = 5;
//	a[8][3] = 1;
//	a[8][4] = 6;
//	a[8][5] = 3;
//	a[8][6] = 1;
	a[8][7] = 2;
	a[8][8] = 0;
	a[8][9] = 3;
	a[8][10] = 3;
	a[9][1] = 4;
//	a[9][2] = 6;
//	a[9][3] = 1;
//	a[9][5] = 1;
//	a[9][6] = 1;
	a[9][7] = 2;
	a[9][8] = 3;
	a[9][9] = 0;
	a[9][10] = 4;
	a[10][1] = 5;
	a[10][2] = 5;
//	a[10][3] = 9;
//	a[10][5] = 2;
//	a[10][6] = 5;
	a[10][8] = 3;
	a[10][9] = 4;  
	a[10][10] = 0;	
	memset(vs, 0, sizeof(vs));
	Prim(a, 6);
}
