#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	vector<int> a(n);
	for(int &i : a) cin >> i;
	sort(a.begin(), a.end());
	int kq = 1e9;
	for(int i = 0; i < n; i++){
		kq = min(kq, abs(a[i] - a[i - 1]));
	}
	cout << kq << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
	}
}
