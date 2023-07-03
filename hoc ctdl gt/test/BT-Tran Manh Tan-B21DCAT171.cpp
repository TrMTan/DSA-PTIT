#include<bits/stdc++.h>

using namespace std;

//Tran Manh Tan-B21DCAT171

int N;
const int MAX = 100;
int a[MAX][MAX];
bool vs[MAX];
vector<int> lt;

void DFS(int u) {
    vs[u] = true;
    lt.push_back(u); // luu cac dinh lien thong
    for(int v = 0; v < N; v++){
        if (a[u][v] == 1 && !vs[v]){
            DFS(v);
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
	memset(vs, false, sizeof(vs));
    readfile("lienthong.txt", a, N); // doc file
    vector<vector<int>> lts;
    for(int u = 0; u < N; u++){
        if(!vs[u]){
        	lt.clear();
            DFS(u);
            lts.push_back(lt);
        }
    }
    ofstream output("lienthong.out"); // xuat du lieu ra file
    output << "So vung lien thong: ";
    output << lts.size() << endl; 
    for(int i = 0; i < lts.size(); i++){
    	output << "Vung lien thong " << i + 1 << ": ";
        for(int j = 0; j < lts[i].size(); j++){
            output << lts[i][j] + 1 << " "; 
        }
        output << endl;
    }
    output.close();
}

