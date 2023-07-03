#include<bits/stdc++.h>

using namespace std;

long long n, k;
vector<long long> a;

bool bsearch(int l, int r, long long val){
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == val) return 1;
		if(a[m] > val) r = m - 1;
		else l = m + 1;
	}
	return 0;
}

void check(){
	cin >> n >> k;
	a.resize(n + 1, 0);
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		a[i] += a[i - 1];
	}
	if(a[n] == k){
		cout << "YES";
		return;
	}
	for(int i = 1; i <= n; i++){
		if(bsearch(i, n, a[i - 1] + k)){
			cout << "YES";
			return;
		}
	}
	cout << "NO";
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
