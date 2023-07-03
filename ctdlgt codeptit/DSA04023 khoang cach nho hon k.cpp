#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, k;
	cin >> n >> k;
	long long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	long long kq = 0;
	for(int i = 0; i < n; i++){
		kq += lower_bound(a + i + 1, a + n, a[i] + k) - (a + i + 1);
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
