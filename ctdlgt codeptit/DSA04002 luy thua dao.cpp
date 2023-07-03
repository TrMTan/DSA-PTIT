#include<bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

long long binpow(long long n, long long k){
	if(k == 0) return 1;
	long long x = binpow(n, k / 2);
	long long y = (x * x) % MOD;
	if(k % 2 == 0) return y;
	else return (n * y) % MOD; 
}

long long rev(long long n){
	long long res = 0;
	while(n > 0){
		res = res * 10 + n % 10;
		n /= 10;
	}
	return res;
}

void check(){
	long long n, r; 
	cin >> n;
	r = rev(n);
	cout << binpow(n, r) << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
	}
}
