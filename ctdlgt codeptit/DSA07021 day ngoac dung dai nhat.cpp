#include<bits/stdc++.h>

using namespace std;

void check(){
	string s; cin >> s;
	stack<int> st;
	st.push(-1);
	int kq = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '('){
			st.push(i);
		}else{
			st.pop();
			if(st.empty()){
				st.push(i);
			}else{
				kq = max(kq, i - st.top());
			}
		}
	}
	cout << kq;
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
