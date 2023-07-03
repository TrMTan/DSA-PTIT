#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	vector<long long> a(n), b(n);
	for(auto &i : a) cin >> i;
	for(auto &i : b) cin >> i;
	sort(a.begin(), a.end());
	sort(b.rbegin(), b.rend());
	long long res = 0;
	for(int i = 0; i < n; i++){
		res += a[i] * b[i];
	}
	cout << res;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
