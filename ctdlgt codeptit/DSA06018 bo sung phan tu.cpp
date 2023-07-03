#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	set<int> se;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		se.insert(x);
	}
	vector<int> v(se.begin(), se.end());
	cout << (v.back() - v.front() + 1) - v.size();
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
