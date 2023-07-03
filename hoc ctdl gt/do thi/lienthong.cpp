#include<bits/stdc++.h>

using namespace std;

const int MAX = 100;

void DFS(int u, int a[][MAX], bool vs[], vector<int>& lt) {
    vs[u] = true;
    lt.push_back(u); // luu cac dinh lien thong
    for(int v = 0; v < MAX; v++){
        if (a[u][v] == 1 && !vs[v]){
            DFS(v, a, vs, lt);
        }
    }
}

void readfile(const string& filename, int a[][MAX], int& n){
	ifstream IP(filename);
	IP >> n;
	for(int i = 0; i < n; i++){
		for (int j = 0; j < n; j++) {
            IP >> a[i][j];
        }
	}
	IP.close();
}

int main() {
    int N;
    int a[MAX][MAX]; 
    bool vs[MAX] = { false }; 
    readfile("lienthong.txt", a, N); // doc file
    vector<vector<int>> lts;
    for(int u = 0; u < N; u++){
        if(!vs[u]){
            vector<int> lt;
            DFS(u, a, vs, lt);
            lts.push_back(lt);
        }
    }
    ofstream output("lienthong.out"); // xuat du lieu ra file
    output << lts.size() << endl; 
    for(int i = 0; i < lts.size(); i++){
        for(int j = 0; j < lts[i].size(); j++){
            output << lts[i][j] + 1 << " "; 
        }
        output << endl;
    }
    output.close();
}

