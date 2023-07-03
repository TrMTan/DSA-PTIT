#include<bits/stdc++.h>

using namespace std;

void check(){
	string s;
	cin >> s;
	s.erase(remove(s.begin(), s.end(), ' '), s.end());
	stack<int> st;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '('){
			st.push(i);
		}else if(s[i] == ')'){
			if(!st.empty()){
				st.pop();
			}else{
				s[i] = '#';
			}
		}
	}
	while(!st.empty()){
		s[st.top()] = '#';
		st.pop();
	}
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '#'){
			cout << "-1";
		}else if(s[i] == '('){
			cout << 0;
		}else if(s[i] == ')'){
			cout << 1;
		}else cout << s[i];
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}


