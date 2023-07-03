#include<bits/stdc++.h>

using namespace std;

int cal(int x, int y, char o){
	switch(o){
	case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
	}
}

void check(){
	string s; cin >> s;
	stack<int> st;
	for(int i = s.length() - 1; i >= 0; i--){
		if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
			int fi = st.top(); st.pop();
			int se = st.top(); st.pop();
			int z = cal(fi, se, s[i]);
			st.push(z);
		}else st.push(s[i] - '0');
	}
	cout << st.top();
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}

