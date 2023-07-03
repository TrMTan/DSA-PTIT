#include<bits/stdc++.h>

using namespace std;

void check(){
	string s; cin >> s;
	long long f[101] = {}, kq = 0;
	f[0] = s[0] - '0';
	kq = f[0];
	for(int i = 1; i < s.length(); i++){
		int t =  s[i] - '0';
		f[i] = f[i - 1] * 10 + t * (i + 1);
		kq += f[i];
	}
	cout << kq;
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
