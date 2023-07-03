#include<bits/stdc++.h>

using namespace std;

void check(){
	int k; cin >> k;
	string s; cin >> s;
	for(int i = 0; i < s.length(); i++){
		char c = s[s.length() - 1];
		int vt = s.length() - 1;
		for(int j = s.length() - 1; j > i; j--){ // duyet tu cuoi ve tim so lon nhat 
			if(s[j] > c){
				c = s[j];
				vt = j;
			}
		}
		if(c > s[i] && k > 0){
			swap(s[i], s[vt]);
			k--;
		}
	}
	cout << s;
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
