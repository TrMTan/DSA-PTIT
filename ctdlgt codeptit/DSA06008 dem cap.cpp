#include<bits/stdc++.h>

using namespace std;

int dem(int x, int y[], int n, int cnt[]){ // cnt[] dem sso lan xuat hien
	if(x == 0) return 0;
	if(x == 1) return cnt[0];
	auto it = upper_bound(y, y + n, x);
	int ans = (y + n) - it;
	ans += cnt[0] + cnt[1]; // dem so luong so 0 vs 1 trong mang y
	if(x == 2) ans -= cnt[3] + cnt[4];
	if(x == 3) ans += cnt[2];
	return ans;
}

int calc(int x[], int y[], int n, int m){
	int cnt[5] = {};
	for(int i = 0; i < m; i++){
		if(y[i] < 5){
			cnt[y[i]]++;
		}
	}
	sort(y, y + m);
	int ans = 0;
	for(int i = 0; i < n; i++){
		ans += dem(x[i], y, m, cnt);
	}
	return ans;
}

void check(){
	int n, m;
	cin >> n >> m;
	int x[n], y[m];
	for(int &i : x) cin >> i;
	for(int &i : y) cin >> i;
	cout << calc(x, y, n, m);
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
