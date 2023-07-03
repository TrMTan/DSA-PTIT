#include<bits/stdc++.h>

using namespace std;

int n, m;
int a[105][105];
int dem = 0;

void Try(int i, int j){
	if(i == m && j == n) dem++;
	if(i < m) Try(i + 1, j);
	if(j < n) Try(i, j + 1);
}

void check(){
	cin >> m >> n;
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	dem = 0;
	Try(1, 1);
	cout << dem;
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); 
		cout << endl;
	}
}
