#include<bits/stdc++.h>

using namespace std;

int n, a[10][10];
vector<string> v; // luu ket qua
bool check[100][100]; // kiem tra xme da dc tham chua

void Tryql(int i, int j, string s){
	if(i == n && j == n){
		v.push_back(s);
		return;
	}
	if(i != n && a[i + 1][j] == 1 && !check[i + 1][j]){ // neu hang i tiep theo co 1 thi di duoc
		check[i][j] = 1;
		Tryql(i + 1, j, s + 'D');
		check[i][j] = 0;
	}
	if(i != 1 && a[i - 1][j] == 1 && !check[i - 1][j]){ // neu hang i phia truoc co 1 thi di duoc
		check[i][j] = 1;
		Tryql(i - 1, j, s + 'U');
		check[i][j] = 0; 
	}
	if(j != n && a[i][j + 1] == 1 && !check[i][j + 1]){ // neu cot j tiep theo co 1 thi di dc
		check[i][j] = 1;
		Tryql(i, j + 1, s + 'R');
		check[i][j] = 0; 
	}
	if(j != 1 && a[i][j - 1] == 1 && !check[i][j - 1]){ // neu cot j phia truoc co 1 thi di dc
		check[i][j] = 1;
		Tryql(i, j - 1, s + 'L');
		check[i][j] = 0; 
	}
}

void test(){
	v.clear();
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
			check[i][j] = 0;
		}
	}
	if(a[1][1] == 0 || a[n][n] == 0){
		cout << -1;
		return;
	}
	Tryql(1, 1, "");
	if(v.empty()){
		cout << -1;
		return;
	}
	sort(v.begin(), v.end());
	for(auto i : v) cout << i << " ";
}

int main(){
	int t; cin >> t;
	while(t--){
		test(); cout << endl;
	}
}

