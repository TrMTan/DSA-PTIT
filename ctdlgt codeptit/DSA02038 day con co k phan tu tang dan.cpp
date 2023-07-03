#include<bits/stdc++.h>

using namespace std;

int n, k;
vector<int> a, b;

void print(){
	for(int i = 1; i <= k ; i++){
		cout << a[b[i]] << " ";	
	}
	cout << endl;
}

void sinh(int i){
	for(int j = b[i - 1] + 1; j <= n - k + i; j++){
		b[i] = j;
		if(i == k) print();
		else sinh(i + 1);
	}
}

void check(){
	cin >> n >> k;
	a.resize(n + 1);
	b.resize(k + 1, 0);
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	sinh(1);
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
