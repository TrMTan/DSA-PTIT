#include<bits/stdc++.h>

using namespace std;

void check(){
	long long n, k, a[5005], it;
	cin >> n >> k;
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	long long dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > k) break;
		for(int j = i + 1; j < n; j++){
			it = upper_bound(a + j + 1, a + n, k - a[i] - a[j] - 1) - a;
			if(it > j) dem += it - j - 1;
			else break;
		}
	}
	cout << dem;
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
