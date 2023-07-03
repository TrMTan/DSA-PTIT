#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	string s; cin >> s;
	int i = s.length() - 2;
	while(i >= 0 && s[i] >= s[i + 1]) i--;
	if(i < 0){
		cout << n << " " <<"BIGGEST";
		return;
	}
	int j = s.length() - 1;
	while(s[i] >= s[j]) j--;
	swap(s[i], s[j]);
	sort(s.begin() + i + 1, s.end());
	cout << n << " " << s;
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
