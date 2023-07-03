#include<bits/stdc++.h>

using namespace std;

int n, s, kq;
int a[30];

void sinh(int i, int value, int count){
	if(i == n || value >= s || count > kq){
		if(value == s){
			kq = min(kq, count);
		}
		return;
	}
	sinh(i + 1, value, count);
	sinh(i + 1, value + a[i], count + 1);
}

void check(){
	cin >> n >> s;
	kq = INT_MAX;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sinh(0, 0, 0);
	if(kq != INT_MAX){
		cout << kq;
	}else cout << -1;
}

int main(){
	check();
}
