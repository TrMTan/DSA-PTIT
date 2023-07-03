#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for(auto &i : a) cin >> i;
	sort(a.begin(), a.end());
	int x = min(k, n - k);
	int sum1 = 0, sum2 = 0;
	for(int i = 0; i < x; i++){
		sum1 += a[i];
	}
	for(int i = x; i < n; i++){
		sum2 += a[i];
	}
	cout << sum2 - sum1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
