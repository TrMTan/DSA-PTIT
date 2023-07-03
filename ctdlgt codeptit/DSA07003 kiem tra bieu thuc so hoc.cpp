#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		bool ok; // ktra dung hay sai
		stack<char> st;
		for(int i = 0; i < s.length(); i++){
			if(s[i] == ')'){
				ok = true; // true la thua dau ()
				char c = st.top(); st.pop(); 
				while(c != '('){
					if(c == '+' || c == '-' || c == '*' || c == '/'){
						ok = false; // false la khong thua dau ()
					}
					c = st.top(); st.pop(); 
				}if(ok) break;
			}else st.push(s[i]);
		}
		if(ok) cout << "Yes";
		else cout << "No";
		cout << endl;
	}
	cout << endl;
}
