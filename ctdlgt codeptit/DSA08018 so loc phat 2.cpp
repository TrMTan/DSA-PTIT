#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	queue<string> q;
	vector<string> v;
	q.push("6");
	q.push("8");
	while(!q.empty()){
		string s = q.front();
		q.pop();
		v.push_back(s);	
		if(s.length() == n) continue;
		q.push(s + "6");
		q.push(s + "8");
	}
	cout << v.size() << endl;
	for(string i : v) cout << i << " ";
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
