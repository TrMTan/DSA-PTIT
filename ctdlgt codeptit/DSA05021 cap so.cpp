#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	vector<pair<int, int>> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i].first >> a[i].second;
	}
	sort(a.begin(), a.end());
	vector<int> f(n, 1);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++){
			if(a[i].first > a[j].second){
				f[i] = max(f[i], f[j] + 1);
			}
		}
	}
	cout << *max_element(f.begin(), f.end());
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
