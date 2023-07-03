#include<bits/stdc++.h>

using namespace std;

int n;
string s;

void lknp(int m){
	if(m > n){
		for(int i = 1; i <= n; i++){
			cout << s[i];
		}
		cout << " ";
		return;
	}
	for(char i = 'A'; i <= 'B'; i++){
		s[m] = i;
		lknp(m + 1);
	}
}

void xauab(){
	cin >> n;
	lknp(1);
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		xauab();
	}
}
