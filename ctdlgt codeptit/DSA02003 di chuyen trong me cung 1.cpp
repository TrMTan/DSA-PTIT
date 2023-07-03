#include<bits/stdc++.h>

using namespace std;

int n, a[11][11];
vector<string> v; // luu ket qua de sap xep

void Tryql(int i, int j, string s){
	if(i == n && j == n){
		v.push_back(s);
		return;
	}
	if(i < n && a[i + 1][j] == 1){ // neu hang i tiep theo co 1 thi di dc
		Tryql(i + 1, j, s + 'D');
	}
	if(j < n && a[i][j + 1] == 1){ // neu cot j tiep theo co 1 thi di dc
		Tryql(i, j + 1, s + 'R');
	}
}

void check(){
	v.clear();
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	if(a[1][1] == 0 || a[n][n] == 0){
		cout << "-1";
		return;
	}
	Tryql(1, 1, "");
	if(v.empty()){
		cout << -1;
		return;
	}
	sort(v.begin(), v.end());
	for(auto x : v){
		cout << x << " ";
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
