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
	cin.ignore();
	stack<int> st;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
			int se = st.top(); st.pop(); // lay ra 2
			int fi = st.top(); st.pop(); // lay ra 3
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
