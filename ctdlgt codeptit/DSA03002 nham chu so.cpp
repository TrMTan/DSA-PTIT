#include<bits/stdc++.h>

using namespace std;

long long to_five(string s){
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '6'){
			s[i] = '5';
		}
	}
	int n = stoll(s);
	return n;
}

long long to_six(string s){
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '5'){
			s[i] = '6';
		}
	}
	int n = stoll(s);
	return n;
}


void check(){
	string a, b;
	cin >> a >> b;
	cout << to_five(a) + to_five(b) << " " << to_six(a) + to_six(b);
}

int main(){
	check();
}
