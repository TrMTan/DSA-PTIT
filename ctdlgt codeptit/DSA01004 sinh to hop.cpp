#include<bits/stdc++.h>

using namespace std;

int n, k, a[100];

void sth(int m){
	if(m > k){
		for(int i = 1; i <= k; i++){
			cout << a[i];
		}
		cout << " ";
		return;
	}
	for(int i = a[m - 1] + 1; i <= n - k + m; i++){
		a[m] = i;
		sth(m + 1);
	}
}

void check(){
	cin >> n >> k;
	sth(1);
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
