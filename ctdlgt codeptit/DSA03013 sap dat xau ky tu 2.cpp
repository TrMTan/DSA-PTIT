#include<bits/stdc++.h>

using namespace std;

void check(){
	int d; cin >> d;
	string s; cin >> s;
	int a[26] = {0}; // dem so lan xh cua cac ptu
	for(char x : s){
		a[x - 'A']++;
	}
	int maxvl = *max_element(a, a + 26);
	if(s.length() - maxvl >= (maxvl - 1) * (d - 1)) cout << "1";
	else cout << "-1";
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
