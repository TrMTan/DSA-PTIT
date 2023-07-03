#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, x; cin >> n >> x;
	vector<int> a(n);
	for(int &i : a) cin >> i;
	int ok = -1;
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			ok = 1;
		}
	}
	cout << ok << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
