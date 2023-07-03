#include<bits/stdc++.h>

using namespace std;

int n, kq, a[10], vs[10], tmp[10]; // tmp de nhap mang dau vao
bool kt;
void print(){
	kq++;
	for(int i = 1; i <= n; i++){
		if(a[i] != tmp[i]){
			return;
		}
	}
	kt = true;
}

void hv(int i){
	if(kt) return;
	for(int j = 1; j <= n; j++){
		if(!vs[j]){
			a[i] = j;
			vs[j] = 1;
			if(i == n) print();
			else hv(i + 1);
			vs[j] = 0;
		}
	}
}

void check(){
	kq = 0,	kt = false;
	memset(vs, 0, sizeof(vs));
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> tmp[i];
	}
	hv(1);
	cout << kq;
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
