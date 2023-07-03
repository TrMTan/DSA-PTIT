#include<bits/stdc++.h>

using namespace std;

void check(){
	string s; cin >> s;
	stack<int> st;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == ')' && !st.empty() && s[st.top()] == '('){
			st.pop();
		}else if(s[i] == '}' && !st.empty() && s[st.top()] == '{'){
			st.pop();
		}else if(s[i] == ']' && !st.empty() && s[st.top()] == '['){
			st.pop();
		}else st.push(i);
	}
	if(st.empty()) cout << "YES";
	else cout << "NO";
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
