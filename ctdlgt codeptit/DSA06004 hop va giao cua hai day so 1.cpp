#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, m, x;
	cin >> n >> m;
	set<int> a, b;
	for(int i = 0; i < n; i++){
		cin >> x;
		a.insert(x);
	}
	for(int i = 0; i < m; i++){
		cin >> x;
		b.insert(x);
	}
	map<int, int> mp;
	for(int i : a) mp[i]++;
	for(int i : b) mp[i]++;
	for(auto x : mp){
		cout << x.first << " ";
	}
	cout << endl;
	for(auto x : mp){
		if(x.second > 1){
			cout << x.first << " ";
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
