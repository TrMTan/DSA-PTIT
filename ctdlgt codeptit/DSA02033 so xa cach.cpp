#include<bits/stdc++.h>

using namespace std;

int n, a[100];
bool vs[100];

void print(){
	for(int i = 1; i < n; i++){
		if(abs(a[i] - a[i + 1]) == 1) return;
	}
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << endl;
}

void sinhhv(int m){
	for(int i = 1; i <= n; i++){
		if(!vs[i]){
			vs[i] = true;
			a[m] = i;
			if(m == n) print();
			else sinhhv(m + 1);
			vs[i] = false;
			
		}
	}
}

void check(){
	cin >> n;
	memset(vs, false, sizeof(vs));
	sinhhv(1);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
