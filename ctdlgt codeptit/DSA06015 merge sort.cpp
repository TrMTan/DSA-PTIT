#include<bits/stdc++.h>

using namespace std;

//void check(){
//	int n;
//	cin >> n;
//	int a[n];
//	for(int &i : a) cin >> i;
//	sort(a, a + n);
//	for(int &i : a) cout << i << " ";
//}

void merge(int a[], int l, int m, int r){
	vector<int> x(a + l, a + m + 1);
	vector<int> y(a + m + 1, a + r + 1);
	int i = 0, j = 0;
	while(i < x.size() && j < y.size()){
		if(x[i] <= y[j]){
			a[l] = x[i]; l++; i++;
		}else{
			a[l] = y[j]; l++; j++;
		}
	}
	while(i < x.size()){
		a[l] = x[i]; l++; i++;
	}
	while(j < y.size()){
		a[l] = y[j]; l++; j++;
	}
}

void mergesort(int a[], int l, int r){
	if(l >= r) return;
	int m = (l + r) / 2;
	mergesort(a, l, m);
	mergesort(a, m + 1, r);
	merge(a, l, m, r);	
}

void check(){
	int n; cin >> n;
	int a[n];
	for(int &i : a) cin >> i;
	mergesort(a, 0, n - 1);
	for(int &i : a) cout << i << " ";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
