#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	vector<int> a(n);
	for(int &i : a) cin >> i;
	cout << lower_bound(a.begin(), a.end(), 1) - a.begin() << endl;
	
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
	}
}
