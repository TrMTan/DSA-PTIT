#include<bits/stdc++.h>

using namespace std;
//0 1
//00 01
//11 10
void check(){
	int n; cin >> n;
	vector<string> a;
	a.push_back("0");
	a.push_back("1");
	for(int i = 2; i <= n; i++){
		int l = a.size();
		for(int j = l - 1; j >= 0; j--){
			a.push_back(a[j]);
		}
		for(int j = 0; j < l; j++){
			a[j] = "0" + a[j];
		}
		for(int j = l; j < a.size(); j++){
			a[j] = "1" + a[j];
		}
	}
	for(string i : a) cout << i << " ";
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
