#include<bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;

void check(){
	int n; cin >> n;
	vector<long long> a(n);
	for(auto &i : a) cin >> i;
	sort(a.begin(), a.end());
	long long kq = 0;
	for(int i = 0 ; i < n; i++){
		kq += a[i] * i;
		kq %= MOD;
	}
	cout << kq;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
