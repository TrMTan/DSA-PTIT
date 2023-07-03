#include<bits/stdc++.h>

using namespace std;

void check(){
	string s;
	getline(cin, s);
	stack<string> st;
	stringstream ss(s);
	while(ss >> s){
		st.push(s);
	}
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		check();		
	}
}
