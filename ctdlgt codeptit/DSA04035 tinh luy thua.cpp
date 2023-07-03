#include<bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;

long long binpow(long long a, long long b){
	if(b == 0) return 1;
	if(b == 1) return a;
	long long x = binpow(a, b / 2);
	long long y = (x * x) % MOD;
	if(b % 2 == 0) return y;
	else return (a * y) % MOD;
}

int main(){
	long long a, b;
	while(cin >> a >> b){
		if(a == 0 && b == 0) break;
		cout << binpow(a, b) << endl;
	}
}
