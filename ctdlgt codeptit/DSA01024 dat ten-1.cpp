#include<bits/stdc++.h>

using namespace std;

int n, k;
vector<string> b;
int a[10001];
// a de sinh cau hinh tiep theo, b de luu cac to hop xong in ra

void print(){
	for(int i = 1; i <= k; i++){
		cout << b[a[i] - 1] << " ";
	}	
	cout << endl;
}

void sinh(int m){
	for(int i = a[m - 1] + 1; i <= b.size() - k + m; i++){
		a[m] = i;
		if(m == k) print();
		else sinh(m + 1);
	}
}

void check(){
	cin >> n >> k;
	string s;
	map<string, bool> mp;
	for(int i = 1; i <= n; i++){
		cin >> s;
		mp[s] = 1;
	}
	for(auto &i : mp){
		b.push_back(i.first);
	}
	sinh(1);
}

int main(){
	check();
	cout << endl;
}
