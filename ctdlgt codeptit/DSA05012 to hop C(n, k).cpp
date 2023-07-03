#include<bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;
long long c[1001][1001];

void tohop(){
	for(int i = 0; i <= 1000; i++){
		for(int j = 0; j <= i; j++){
			if(j == 0 || i == j){
				c[i][j] = 1;
			}else{
				c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
				c[i][j] %= MOD;
			}  
		}
	}
}

void check(){
	int n, k;
	cin >> n >> k;
	cout << c[n][k];
}

int main(){
	int t;
	cin >> t;
	tohop();
	while(t--){
		check();
		cout << endl;
	}
}
