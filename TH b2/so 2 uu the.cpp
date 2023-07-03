#include<bits/stdc++.h>

using namespace std;

bool check(string s){
	int d = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '2') d++;
	}
	if(d > s.length() / 2) return 1;
	return 0;
}

void check(){
	int n; cin >> n;
	string u, v;
	vector<string> a;
	queue<string> q;
	q.push("1");
	q.push("2");
	a.push_back("2");
	while(q.size()){
		u = q.front();
		q.pop();
		if(check(u)){
			a.push_back(u);
		}
		if(a.size() == 1005) break;
		q.push(u + '0');
		q.push(u + '1');
		q.push(u + '2');
	}
	for(int i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}


