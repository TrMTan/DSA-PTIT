#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	int kq = 0;
	for(int &i : a) cin >> i;
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			kq = i;
		}
	}
	cout << kq + 1;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
