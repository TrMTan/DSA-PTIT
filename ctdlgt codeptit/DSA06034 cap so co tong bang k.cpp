#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, k; cin >> n >> k;
	int a[n];
	for(int &i : a) cin >> i;
	sort(a, a + n);
	long long kq = 0;
	for(int i = 0; i < n; i++){
		kq += upper_bound(a + i + 1, a + n, k - a[i]) - lower_bound(a + i + 1, a + n, k - a[i]);
	}
	cout << kq;
}

int main(){
	int t; 
	cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
