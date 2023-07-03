#include<bits/stdc++.h>

using namespace std;

int f[1001][1001];

void check(){
	string n, m;
	cin >> n >> m;
	int a = n.length(), b = m.length();
	for(int i = 0; i <= a; i++){
		for(int j = 0; j <= b; j++){
			if(i == 0 || j == 0) f[i][j] = 0;
			else{
				if(n[i - 1] == m[j - 1]){
					f[i][j] = f[i - 1][j - 1] + 1;
				}else{
					f[i][j] = max(f[i - 1][j], f[i][j - 1]);
				}
			}
		}
	}
	cout << f[a][b];
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
