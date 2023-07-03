#include<bits/stdc++.h>

using namespace std;

int a[100], n, k;

void print(){
	for(int i = 1; i <= k; i++){
		cout << (char) (a[i] + 'A' - 1);
	}
	cout << endl;
}

void sth(int m){
	for(int i = a[m - 1] + 1; i <= n - k + m; i++){
		a[m] = i;
		if(m == k) print();
		else sth(m + 1);
	}
}

void check(){
	cin >> n >> k;
	sth(1);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
