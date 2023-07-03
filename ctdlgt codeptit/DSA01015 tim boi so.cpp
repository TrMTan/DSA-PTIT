#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	queue<string> q;
	q.push("9");
	while(!q.empty()){
		string s = q.front();
		q.pop();
		
		int x = 0;
		for(char c : s){
			x = x * 10 + (c - '0');
			x %= n;
		}
		if(x == 0){
			cout << s << endl;
			return;
		}
		q.push(s + '0');
		q.push(s + '9');
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
