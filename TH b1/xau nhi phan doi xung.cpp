#include<bits/stdc++.h>

using namespace std;

string s;
int m, l, r;

bool check(string s, int l, int r){
	for(int i = l; i <= r; i++){
		if(s[i - 1] != s[r - i + l - 1]){
			return false;
		}
	}
	return true;
}

void check(){
	cin >> s;
	cin >> m;
	while(m--){
		cin >> l >> r;
		if(check(s, l, r)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	
}

int main(){
	check();
}

