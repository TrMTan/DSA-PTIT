#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	vector<int> chan, le;
	for(int i = 1; i <= n; i++){
		int x; cin >> x;
		if(i % 2 == 1) le.push_back(x);
		else chan.push_back(x);
	}
	sort(le.begin(), le.end());
	sort(chan.rbegin(), chan.rend());
	for(int i = 0; i < chan.size(); i++){
		cout << le[i] << " " << chan[i] << " ";
	}	
	if(n % 2 == 1) cout << le.back();
}

int main(){
	check();
}
