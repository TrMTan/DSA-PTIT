#include<bits/stdc++.h>

using namespace std;

int n, k;
vector<int> a, b;
// a de sinh cau hinh tiep theo, b de luu cac to hop xong in ra
void print(){
	for(int i = 1; i <= k; i++){
		cout << b[a[i] - 1] << " ";
	}	
	cout << endl;
}

void sinh(int m){
	for(int i = a[m - 1] + 1; i <= n - k + m; i++){
		a[m] = i;
		if(m == k) print();
		else sinh(m + 1);
	}
}

void check(){
	cin >> n >> k;
	set<int> se;
	for(int i = 1; i <= n; i++){
		int x; cin >> x;
		se.insert(x);
	}
	// dua cac phan tu vao set de xo phan tu trung
	for(auto x : se){
		b.push_back(x);
	}
	n = se.size();
	a.resize(n + 1);
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
	sinh(1);
}

int main(){
	check();
	cout << endl;
}
