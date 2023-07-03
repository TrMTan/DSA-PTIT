#include<bits/stdc++.h>

using namespace std;

int n; 
int a[1001];
bool vs[1001];

void print(){
	for(int i = 1; i < n; i++){
		if(abs(a[i] - a[i + 1]) == 1){
			return;
		}
	}
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << endl;
}

void sinhhv(int m){
	for(int i = 1; i <= n; i++){
		if(vs[i] == 0){
			vs[i] = 1;
			a[m] = i;
			if(m == n) print();
			else sinhhv(m + 1);
			vs[i] = 0;
		}
	}
}

void check(){
	cin >> n;
	memset(a, 0, sizeof(a));
	memset(vs, false, sizeof(vs));
	sinhhv(1);
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
