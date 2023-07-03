#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> g[1001];
int a[1001][1001];

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i][j]){
				g[i].push_back(j);
//				g[j].push_back(i);
			}
		}
	}
	for(int i = 1; i <= n; i++){
		for(int x : g[i]){
			cout << x << " ";
		}
		cout << endl;
	}
}

