#include<bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b){
	if(a == 0) return b;
	return gcd(b % a, a);
}

long long ktra(vector<long long>& a, long long k){
	long long n = a.size();
	long long l = 0, r = 0, len = n + 1;
	long long curGCD = 0;
	while(r < n){
		curGCD = gcd(curGCD, a[r]);
		r++;
		while(l < r && curGCD == k){
			len = min(len, r - l);
			curGCD = gcd(curGCD, a[l]);
			l++;
		}
	}
	if(len == n + 1) return -1;
	return len + 1;
}

int main(){
	int t; cin >> t;
	while(t--){
		long long n, k;
		cin >> n >> k;
		vector<long long> a(n);
		for(long long &i : a) cin >> i;
		long long kq = ktra(a, k);
		cout << (kq == n + 1 ? -1 : kq) << endl; 
	}
}
