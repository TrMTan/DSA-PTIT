#include<bits/stdc++.h>

using namespace std;

int vs[100], a[100], n;

void shvn(int m){
	if(m > n){
		for(int i = 1; i <= n; i++){
			cout << a[i];
		}
		cout << " ";
		return;
	}
	for(int i = n; i >= 1; i--){
		if(vs[i] == 0){
			a[m] = i;
			vs[i] = 1;
			shvn(m + 1);
			vs[i] = 0;
		}
	}
}

void hvn(){
	cin >> n;
	shvn(1);
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		hvn();
	}
}
