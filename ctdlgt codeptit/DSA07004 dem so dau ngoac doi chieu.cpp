#include<bits/stdc++.h>

using namespace std;

void check(){
	string s; cin >> s;
	stack<char> st;
	int op = 0, cl = 0; // dem so ngoac mo ngoac dong
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '('){
			op++;
			st.push(s[i]);
		}else if(s[i] == ')'){
			if(!st.empty() && st.top() == '('){
				op--;
				st.pop();
			}else{
				cl++;
				st.push(s[i]);
			}
		}
	}
	int kq = op / 2 + cl / 2; // moi cap dong mo ngoac chi dao nguoc 1 dau
	kq += op % 2 + cl % 2; // neu co cap ngoac trai huong, can dao ca 2
	cout << kq;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
