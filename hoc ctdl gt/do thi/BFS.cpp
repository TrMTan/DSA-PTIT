#include<bits/stdc++.h>

using namespace std;

int a[100][100], n, vs[100], e[100], q[100];
//void BFS(int u){ 
//	int v, dq = 1, cq = 0; 
//	cq++; q[cq] = u; vs[u] = 1;
//	while (dq <= cq){ 
//		v = q[dq]; dq++; 
//		cout << v << " ";
////		cout << v << "(" << e[v]  << ")" << " ";
//		for (int i = 1; i <= n; i++){
//			if (vs[i] == 0 && a[v][i] == 1) {
//				cq++; q[cq] = i; 
//				vs[i] = 1; e[i]= v; 
//			}
//		}
//	}
//}

void BFS(int u){
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int v = q.front(); q.pop();
		for(int i = 1; i <= n; i++){
			if(vs[i] == 0 && a[v][i] == 1){
				q.push(i);
			}
		}
		if(vs[v] == 0){
			cout << v << " ";
			vs[v] = 1;
		}
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
	BFS(3);
}

//0 1 0 0 1 0 0 1 0 1
//1 0 1 1 0 1 0 0 0 0
//0 1 0 0 0 0 0 0 0 0
//0 1 0 0 0 1 0 1 0 0
//1 0 0 0 0 1 1 0 1 1
//0 1 0 1 1 0 1 0 0 1
//0 0 0 0 1 1 0 1 1 1
//1 0 0 1 0 0 1 0 1 0
//0 0 0 0 1 0 1 1 0 1
//1 0 0 0 1 1 1 0 1 0

