#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.second == b.second){
		return a.first < b.first;
	}
	return a.second < b.second; // sap xep toa do y theo thu tu tang dan
}

void check(){
	int n; cin >> n;
	pair<int, int> a[n]; // luu toa do x, y
	for(int i = 0; i < n; i++){
		cin >> a[i].first >> a[i].second;
	}
	sort(a, a + n, cmp);
	int kq = 1, x = a[0].second;
	for(int i = 1; i < n; i++){
		if(a[i].first >= x){
			kq++;
			x = a[i].second;
		}
	}
	cout << kq;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
