#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, m;
	cin >> n >> m;
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		mp[x]++;
	}
	for(int i = 0; i < m; i++){
		int x; cin >> x;
		mp[x]++;
	}
	for(auto x : mp){
		cout << x.first << " ";
	}
	cout << endl;
	for(auto x : mp){
		if(x.second >= 2){
			cout << x.first << " ";
		}
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
