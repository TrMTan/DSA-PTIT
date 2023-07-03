#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> a, b; //b de luu tung so 
vector<vector<int>> res; //luu ket qua

bool snt(int n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

void print(){
	int sum = 0;
	for(int i : b) sum += i;
	if(snt(sum)) res.push_back(b);
}

void sinh(int i){
	for(int j = 0; j <= 1; j++){
		if(j == 1) b.push_back(a[i]);
		if(i == n - 1) print();
		else sinh(i + 1);
		if(j == 1) b.pop_back();
	}
}

void check(){
	cin >> n;
	a.resize(n);
	b.clear();
	res.clear();
	for(int &i : a) cin >> i;
	sort(a.rbegin(), a.rend());
	sinh(0);
	sort(b.begin(), b.end());
	for(auto i : res){
		for(int j : i){
			cout << j << " ";
		}
		cout << endl;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
