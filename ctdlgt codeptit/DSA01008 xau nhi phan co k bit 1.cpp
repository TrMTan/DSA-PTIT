#include<bits/stdc++.h>

using namespace std;

int n, k, a[100] = {};

void print(){
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << endl;
}

void lknp(int m){
	for(int i = 0; i <= 1; i++){
		a[m] = i;
		if(m == n){
			int dem = 0;
			for(int i = 1; i <= n; i++) dem += a[i];
			if(dem == k) print();
		} 
		else lknp(m + 1); 
	}
}

int main() {
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		lknp(1);
	}
}
