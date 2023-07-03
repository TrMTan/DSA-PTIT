#include<bits/stdc++.h>

using namespace std;

int n, k, kq;
vector<int> a, b; 

// mang b danh dau nhi phan phan tu co tong = s; 
// vd n = 4, k = 4
// 1 2 3 4
// 1 0 1 0

void print(){
	int tong = 0;
	for(int i = 0; i < n; i++){
		tong += a[i] * b[i];
	}
	if(tong == k){
		kq++;
		for(int i = 0; i < n; i++){
			if(b[i]) cout << a[i] << " ";
		}
		cout << endl;
	}
}

void sinh(int m){
	for(int i = 0; i <= 1; i++){
		b[m] = i;
		if(m == n - 1) print();
		else sinh(m + 1);
	}
}

int main(){
	cin >> n >> k;
	a.resize(n);
	b.resize(n);
	for(int &i : a) cin >> i;
	sort(a.begin(), a.end());
	sinh(0);
	cout << kq;
}


