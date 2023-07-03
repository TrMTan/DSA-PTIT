#include<bits/stdc++.h>

using namespace std;

int n, a[100], vs[100];

void lkhv(int m){	
	if(m > n){
		for(int i = 1; i <= n; i++){
			cout << a[i];
		}
		cout << " ";
		return;
	}
	for(int i = 1; i <= n; i++){
		if(vs[i] == 0){
			a[m] = i;
			vs[i] = 1;
			lkhv(m + 1);
			vs[i] = 0;
		}
	}
}

void shv(){
	cin >> n;
	lkhv(1);
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		shv();
	}
}
