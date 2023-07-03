#include<bits/stdc++.h>

using namespace std;

int n, a[100];

void sinhds(int a[], int n){
	if(n > 0){
		cout << "[";
		for(int i = 0; i < n - 1; i++){
			cout << a[i] << " ";
		}
		cout << a[n - 1] << "]" << endl;
		for(int i = 0; i < n - 1; i++){
			a[i] = a[i] + a[i + 1];
		}
		sinhds(a, n - 1);
	}
}

void check(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sinhds(a, n);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
