#include<bits/stdc++.h>

using namespace std;

void check(){
	int m, n;
	cin >> m >> n;
	int p[m], q[n], r[n + m - 1] = {};
	for(int &i : p) cin >> i;
	for(int &i : q) cin >> i;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			r[i + j] += p[i] * q[j];
		}
	}
	for(int &i : r) cout << i << " ";
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
