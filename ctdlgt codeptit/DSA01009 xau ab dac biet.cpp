#include<bits/stdc++.h>

using namespace std;

int n, k;
string s;
vector<string> res;

void print(){
	string z(k, 'A'); // tao string k ky tu A de tim
	int pos = s.find(z, 0); // tim vi tri xuat hien ky tu A
	if(pos != -1){
		string tmp = s.substr(pos + 1);
		if(tmp.find(z) == -1){
			res.push_back(s);
		}
	}
	
}

void sinh(int i){
	for(char j = 'A'; j <= 'B'; j++){
		s[i] = j;
		if(i == n - 1) print();
		else sinh(i + 1); 
	}
}

void check(){
	cin >> n >> k;
	s.resize(n);
	sinh(0);
	cout << res.size() << endl;
	sort(res.begin(), res.end());
	for(string i : res) cout << i << endl;
}

int main(){
	check();
}
