#include<bits/stdc++.h>

using namespace std;

void check(){
	string s; cin >> s;
	int n = s.length();
	int kq = 1;
	// tam le
	for(int i = 0; i < n; i++){
		int u = i, v = i;
		while(u >= 0 && v < n){
			if(s[u] == s[v]){
				kq = max(kq, v - u + 1);
				u--, v++;
			}else break;
		}
	}
	// tam chan
	for(int i = 0; i < n; i++){
		int u = i, v = i + 1;
		while(u >= 0 && v < n){
			if(s[u] == s[v]){
				kq = max(kq, v - u + 1);
				u--, v++;
			}else break;
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
