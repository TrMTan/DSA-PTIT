#include<bits/stdc++.h>

using namespace std;

long long binpow(long long n, long long k){
	if(k == 0) return 1;
	if(k == 1) return n;
	long long x = binpow(n, k / 2);
	long long y = x * x;
	if(k % 2 == 0) return y;
	else return n * y;
}

//1, 2, 1, 3, 1, 2, 1, 4, 1, 2, 1, 3, 1, 2, 1 day doi xung vs t = 4

long long find(long long n, long long k){
	long long x = binpow(2, n - 1);
	if(k == x) return n;
	if(k < x) return find(n - 1, k);
	return find(n - 1, k - x); 
}

void check(){
	long long n, k;
	cin >> n >> k;
	cout << find(n, k);
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
