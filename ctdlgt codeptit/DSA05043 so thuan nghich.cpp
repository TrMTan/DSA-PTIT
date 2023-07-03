#include<bits/stdc++.h>

using namespace std;

void check(){
	string s; cin >> s;
	int n = s.length();
	int res = 1;
	for(int i = 0 ; i < n; i++){
		int u = i, v = i;
		while(u >= 0 && v < n){
			if(s[u] == s[v]){
				res = max(res, v - u + 1);
				u--, v++;
			}else break;
		}
	}
	for(int i = 0 ; i < n; i++){
		int u = i, v = i + 1;
		while(u >= 0 && v < n){
			if(s[u] == s[v]){
				res = max(res, v - u + 1);
				u--, v++;
			}else break;
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
