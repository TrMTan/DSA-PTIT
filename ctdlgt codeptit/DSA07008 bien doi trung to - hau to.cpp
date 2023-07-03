#include<bits/stdc++.h>

using namespace std;

int degree(char c){
	if(c == '^') return 5;
	if(c == '*' || c == '/') return 4;
	if(c == '+' || c == '-') return 3;
	return 2;
}

void check(){
	string s; cin >> s;
	string res = ""; // luu kq
	stack<char> st; // luu dau ()
	for(int i = 0; i < s.length(); i++){
		if(isalpha(s[i])) res += s[i];
		else if(s[i] == '(') st.push(s[i]);
		else if(s[i] == ')'){  // in het tat ca cac ptu o dinh stack
			while(st.size() && st.top() != '('){
				res += st.top();
				st.pop();
			}
			st.pop();
		}else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
			while(st.size() && degree(st.top()) >= degree(s[i])){
				res += st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(st.size()){
		if(st.top() != '(') res += st.top();
		st.pop();
	}
	cout << res;
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
