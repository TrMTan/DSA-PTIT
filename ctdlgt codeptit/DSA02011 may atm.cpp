#include<bits/stdc++.h>

using namespace std;

int n, s, kq, a[30];

void sinh(int i, int value, int cou){
	if(i == n || value >= s || cou >= kq){
		if(value == s){
			kq = min(kq, cou);
		}
		return;
	}
	sinh(i + 1, value, cou);
	sinh(i + 1, value + a[i], cou + 1);
}

void check(){
	cin >> n >> s;
	kq = INT_MAX;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sinh(0, 0, 0);
	if(kq != INT_MAX) cout << kq;
	else cout << -1;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
