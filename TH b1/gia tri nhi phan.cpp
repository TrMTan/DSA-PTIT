#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, q;
	cin >> n >> q;
	int a[n];
	memset(a, 0, sizeof(a));
	for(int i = 0; i < q; i++){
		int x, y; cin >> x >> y;
		for(int j = x - 1; j < y; j++){
			a[j] = 1 - a[j];
		}
	}
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
