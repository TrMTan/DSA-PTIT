#include<bits/stdc++.h>

using namespace std;

int a[100][100], n, vs[100], e[100];
//void DFS(int u) { 
//	cout << u << " ";
////	cout << u << "(" << e[u] << ")" << " ";
//	vs[u] = 1; 
//	for (int v = 1; v <= n; v++){
//		if(vs[v] == 0 && a[u][v] == 1){ 
//			e[v] = u; 
//			DFS(v);
//		}
//	}
//}


void DFS(int u) {
    stack<int> s;
    s.push(u);
    while(!s.empty()) {
        int v = s.top();
        s.pop();
        for(int i = n; i > 0; i--) {
	        if(vs[i] == 0 && a[v][i] == 1) {
	            s.push(i);
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
	DFS(3);
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

