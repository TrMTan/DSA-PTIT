#include<bits/stdc++.h>

using namespace std;

long long f[100];

void fibo(){
	f[1] = f[2] = 1;
	for(int i = 3; i <= 100; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
}

void check(){
	fibo();
	long long n, k;
	cin >> n >> k;
	while(true){
		if(n == 1 || n == 2){
			if(n == 1) cout << "A";
			else cout << "B";
			return;
		}
		if(k > f[n - 2]){
			k -= f[n - 2];
			n--;
		}else{
			n -= 2;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
