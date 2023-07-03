#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	int a[n], f[n] = {0};
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int res = 0;
	for(int i = 1; i <= n; i++){
		f[a[i]] = f[a[i] - 1] + 1;
		res = max(res, f[a[i]]);
	}
	cout << n - res << endl;
}

int main(){
	check();
}


