#include<bits/stdc++.h>

using namespace std;

int n, m, ao;
vector<string> vuon;
int r[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int c[8] = {-1, 0, 1, -1, 1,-1, 0, 1};

void dfs(int i, int j){
	for(int k = 1; k < 8; k++){
		int x = i + r[k];
		int y = j + c[k];
		if(x >= 0 && x < n && y >= 0 && y < m && vuon[x][y] == 'W'){
			vuon[x][y] = '.';
			dfs(x, y);
		}
	}
}

void check(){
	ao = 0;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		string s; cin >> s;
		vuon.push_back(s);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(vuon[i][j] == 'W'){
				vuon[i][j] = '.';
				ao++;
				dfs(i, j);
			}
		}
	}
	cout << ao;
}

int main(){
	check();
	cout << endl;
}
