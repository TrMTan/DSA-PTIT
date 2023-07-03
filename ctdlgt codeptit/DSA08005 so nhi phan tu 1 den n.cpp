#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	queue<string> q;
	q.push("1");
	while(n--){
		string s = q.front();
		q.pop();
		cout << s << " ";
		q.push(s + "0");
		q.push(s + "1");
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
