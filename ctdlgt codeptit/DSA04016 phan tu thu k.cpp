#include<bits/stdc++.h>

using namespace std;

void check(){
	int m, n, k;
	cin >> m >> n >> k;
	int a[n + m + 1];
	for(int i = 0; i < n + m; i++){
		cin >> a[i];
	}
	sort(a, a + n + m);
	cout << a[k - 1];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
