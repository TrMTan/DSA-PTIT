#include<bits/stdc++.h>

using namespace std;

int n;
string a, b;
vector<bool> check;

void print(){
	if(b[0] != '0'){
		cout << b << endl;
	}else{
		cout << b.substr(1, b.length()) << endl;
	}
	
}

void hv(int i){
	for(int j = 0; j < n; j++){
		if(!check[j]){
			b[i] = a[j];
			check[j] = true;
			if(i == n - 1) print();
			else hv(i + 1);
			check[j] = false;
		}
	}
}

void ktra(){
	cin >> a;
	sort(a.begin(), a.end());
	n = a.length();
	b.resize(n);
	check.resize(n, false);
	hv(0);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ktra(); cout << endl;
	}
}
