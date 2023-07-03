#include<bits/stdc++.h>

using namespace std;

void check(){
	int k; cin >> k;
	string s; cin >> s;
	int dd[127] = {};
	for(char i : s) dd[i]++;
	priority_queue<int> q;
	for(int i : dd){
		if(i > 0) q.push(i);
	}
	while(k--){
		if(q.empty()) break;
		int x = q.top(); q.pop();
		x--; // xoa bot 1 ky tu co tan suat lon nhat
		q.push(x);
	}
	long long ans = 0;
	while(!q.empty()){
		long long x = q.top(); q.pop();
		ans += x * x;
	}
	cout << ans;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
