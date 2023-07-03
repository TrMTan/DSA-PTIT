#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	vector<int> a(n);
	for(int &i : a) cin >> i;
	int sum = 0, kq = 0;
	for(int i = 0; i < n; i++){
		sum = max(a[i], sum + a[i]);
		kq = max(kq, sum);
	}
	cout << kq << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
	}
}
