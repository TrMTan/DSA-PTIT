#include<bits/stdc++.h>

using namespace std;

int n, k, kq, a[25], tmp[25]; // tmp de nhap mang dau vao
bool kt;
void print(){
	kq++;
	for(int i = 1; i <= k; i++){
		if(a[i] != tmp[i]){
			return;
		}
	}
	kt = true;
}

void th(int i){
	if(kt) return;
	for(int j = a[i - 1] + 1; j <= n - k + i; j++){
		a[i] = j;
		if(i == k) print();
		else th(i + 1);
	}
}

void check(){
	kq = 0,	kt = false;
	cin >> n >> k;
	for(int i = 1; i <= k; i++){
		cin >> tmp[i];
	}
	th(1);
	cout << kq;
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
