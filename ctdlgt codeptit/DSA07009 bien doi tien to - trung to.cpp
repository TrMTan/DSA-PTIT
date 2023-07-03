#include<bits/stdc++.h>

using namespace std;

//*+AB-CD
void check(){
	string s; cin >> s;
	stack<string> st;
	for(int i = s.length() - 1; i >= 0; i--){
		string tmp = string(1, s[i]);
		if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
			string fi = st.top(); st.pop(); // lay ra ky tu D
			string se = st.top(); st.pop(); // lay ra ky tu C
			string z = "(" + fi + tmp + se + ")";
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
