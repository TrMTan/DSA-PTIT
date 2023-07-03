#include<bits/stdc++.h>

using namespace std;

int n;
string s;
vector<string> res;

void check(){
	if(s.front() == '8' && s.back() == '6' && s.find("88") == -1 && s.find("6666") == -1){
		res.push_back(s);
	}
}

void xnpkt(int m){
	for(int i = 0; i <= 1; i++){
		if(i == 0) s[m] = '6';
		else s[m] = '8';
		if(m == n - 1) check();
		else xnpkt(m + 1);
	}
}

int main(){
	cin >> n;
	s.resize(n);
	xnpkt(0);
	for(string i : res){
		cout << i << endl;
	}
}
