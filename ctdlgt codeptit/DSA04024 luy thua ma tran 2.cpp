#include<bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

int n, k;
long long a[11][11], b[11][11];

void mul(long long a[11][11], long long b[11][11]){
	long long c[11][11] = {0}; // luu ket qua nhan ma tran
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
				c[i][j] += (a[i][k] * b[k][j]) % MOD;
				c[i][j] %= MOD;
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			a[i][j] = c[i][j]; // gan lai ma tran c bang ma tran a
		}
	}
}

void Pow(long long a[11][11], int k){
	if(k == 1) return;
	Pow(a, k / 2);
	mul(a, a);
	if(k % 2 == 1) mul(a, b);
}

void check(){
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
			b[i][j] = a[i][j]; // de neu k le thi nhan
		}
	}
	Pow(a, k);
	long long kq = 0;
	for(int i = 0; i < n; i++){
		kq += a[i][n - 1];
		kq %= MOD;
	}
	cout << kq;
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
