#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	int dem = 0;
	for(int i = 0; i < 10; i++){
		dem += n / a[i];
		n %= a[i];
	}
	cout << dem << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
