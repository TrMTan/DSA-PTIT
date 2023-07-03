#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, x; cin >> n >> x;
	vector<long long> a(n);
	for(auto &i : a) cin >> i;
	int pos = upper_bound(a.begin(), a.end(), x) - a.begin();
	if(pos > 0) pos; 
	else pos = -1;
	cout << pos;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
