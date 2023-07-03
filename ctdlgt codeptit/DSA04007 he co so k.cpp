#include<bits/stdc++.h>

using namespace std;

void check(){
	int k; 
	string a, b;
	cin >> k >> a >> b;
	while(a.length() < b.length()) a = "0" + a;
	while(b.length() < a.length()) b = "0" + b;
	int nho = 0;
	string res = "";
	for(int i = a.length() - 1; i >= 0; i--){
		int so = (a[i] - '0') + (b[i] - '0') + nho;
		res = char(so % k + '0') + res;
		nho = so / k; 
	}
	if(nho > 0) res = char(nho + '0') + res;
	cout << res;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
