#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	pair<int, int> a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i].first; // nhap so
		a[i].second = i; // luu chi so
	}
	sort(a, a + n);
	int kq = -1, b = a[0].second, k = a[0].first;
	for(int i = 1; i < n; i++){
		if(a[i].first > k){
			kq = max(kq, a[i].second - b);
		}
		if(b > a[i].second){
			b = a[i].second;
			k = a[i].first;
		}
	}
	cout << kq;
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
