#include<bits/stdc++.h>

using namespace std;

long long f[100];

void fibo(){
	f[1] = 1;
	for(int i = 2; i <= 100; i++){
		f[i] = f[i - 1] * 2;
	}
}

void check(){
	fibo();
	long long n, k;
	cin >> n >> k;
	for(int i = n; i >= 0; i--){
		if(k > f[i]) k -= f[i];
		else if(k == f[i]){
			cout << char(i - 1 + 'A'); 
			return;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
