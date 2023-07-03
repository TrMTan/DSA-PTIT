#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	vector<int> a(n);
	for(int &i : a) cin >> i;
	int tong = 2e9;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			int sum = a[i] + a[j];
			if(abs(sum) < abs(tong)) tong = sum;
		}
	}
	cout << tong << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
