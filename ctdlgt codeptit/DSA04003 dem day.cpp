#include<bits/stdc++.h>

using namespace std;

const long long MOD = 123456789;

long long binpow(long long n, long long k){
	if(k == 0) return 1;
	long long x = binpow(n, k / 2);
	long long y = (x * x) % MOD;
	if(k % 2 == 0) return y;
	else return (n * y) % MOD;
}

void check(){
	long long n;
	cin >> n;
	cout << binpow(2, n - 1);
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
