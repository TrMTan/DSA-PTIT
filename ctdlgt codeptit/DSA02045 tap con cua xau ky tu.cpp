#include<bits/stdc++.h>

using namespace std;

int n;
string a;
vector<string> res;

void sinh(int i, string s){
	for(int j = 0; j <= 1; j++){
		if(j == 1) s.push_back(a[i]);
		if(i == n - 1){
			if(s != "") res.push_back(s);
		}else sinh(i + 1, s);
		if(j == 1) s.pop_back();
	}
}

void check(){
	cin >> n >> a;
	res.clear();
	sinh(0, "");
	sort(res.begin(), res.end());
	for(string i : res){
		cout << i << " ";
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}

