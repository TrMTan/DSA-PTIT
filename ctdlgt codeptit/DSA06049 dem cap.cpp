#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, k; 
	cin >> n >> k;
	int a[100005];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	long long dem = 0;
	for(int i = 0; i < n; i++){
		dem += lower_bound(a + i + 1, a + n, k + a[i]) - (a + i + 1);
	}
	cout << dem;
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
