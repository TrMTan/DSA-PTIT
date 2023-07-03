#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	int a[n];
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		mp[x]++;
	}
	for(auto it : mp){
		if(it.second > n / 2){
			cout << it.first;
			return;
		}
	}
	cout << "NO";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
