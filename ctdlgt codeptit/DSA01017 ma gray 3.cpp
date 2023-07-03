#include<bits/stdc++.h>

using namespace std;

void check(){
	string s; cin >> s;
	string res = "";
	res.push_back(s[0]);
	for(int i = 1; i < s.length(); i++){
		if(s[i] == s[i - 1]){
			res.push_back('0');
		}else{
			res.push_back('1');
		}
	}
	cout << res;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
