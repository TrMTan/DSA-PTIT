#include<bits/stdc++.h>

using namespace std;

bool kt(string s, int n){
	int x = 0;
	for(int i = 0; i < s.length(); i++){
		x = (x * 10 + (s[i] - '0')) % n;
	}
	return x == 0;
}

void check(){
	int n; cin >> n;
	queue<string> q;
	q.push("1");
	while(1){
		string s = q.front();
		q.pop();
		if(kt(s, n)){
			cout << s;
			return;
		}
		q.push(s + "0");
		q.push(s + "1");
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;		
	}
}
