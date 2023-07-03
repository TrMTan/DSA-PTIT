#include<bits/stdc++.h>

using namespace std;

string s;
bool vs[1001];
char c;

bool kt(char c){
	return (c == 'A' || c == 'E');
}

void print(){
	for(int i = 0; i < s.length(); i++){
		if(kt(s[i])){
			if(i == 0 || i == s.length() - 1) continue;
			if(!kt(s[i - 1]) && !kt(s[i + 1])) return;
		}
	}
	cout << s << endl;
}

void sinhhv(char m){
	for(char i = 'A'; i <= c; i++){
		if(vs[i] == 0){
			vs[i] = 1;
			s.push_back(i);
			if(s.length() == c - 'A' + 1) print();
			else sinhhv(m + 1);
			vs[i] = 0;
			s.pop_back();
		}
	}
}

void check(){
	cin >> c;
	memset(vs, false, sizeof(vs));
	sinhhv(1);
}

int main(){
	check();
	cout << endl;
}
