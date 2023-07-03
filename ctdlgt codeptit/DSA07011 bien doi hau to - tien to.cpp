#include<bits/stdc++.h>

using namespace std;
//AB+CD-*
void check(){
	string s; cin >> s;
	stack<string> st;
	for(int i = 0; i < s.length(); i++){
		string tmp = string(1, s[i]);
		if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
			string se = st.top(); st.pop(); // lay ra A
			string fi = st.top(); st.pop(); // lay ra B
			string z = tmp + fi + se;
			st.push(z);
		}else st.push(tmp);
	}
	cout << st.top();
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
