#include<bits/stdc++.h>

using namespace std;

int n, a[100] = {};

bool ktdx(){
	for(int i = 1; i <= n; i++) if(a[i] != a[n - i + 1]) return 0;
	return 1;
}

void print(){
	for(int i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void lknp(int m){
	for(int i = 0; i <= 1; i++){
		a[m] = i;
		if(m == n){
			if(ktdx()){
				print();
			}
		} 
		else lknp(m + 1); 
	}
}

int main() {
	cin >> n;
	lknp(1);
}
