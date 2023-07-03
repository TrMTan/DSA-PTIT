#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	pair<int, int> kq(-1, 1e6); // value | index 
	map<int, int> mp;
	for(int i = 1; i <= n; i++){
		int x; cin >> x;
		if(mp.find(x) != mp.end()){
			if(mp[x] < kq.second){
				kq = {x, mp[x]};
			}
		}else mp[x] = i;
	}
	if(kq.second == 1e6) cout << "NO";
	else cout << kq.first;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
