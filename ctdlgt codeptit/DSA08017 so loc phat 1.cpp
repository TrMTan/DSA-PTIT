#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	queue<string> q;
	q.push("6");
	q.push("8");
	stack<string> st;
	while(!q.empty()){
		string s = q.front();
		q.pop();
		st.push(s);
		if(s.length() == n) continue;
		q.push(s + "6");
		q.push(s + "8");
	}
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
