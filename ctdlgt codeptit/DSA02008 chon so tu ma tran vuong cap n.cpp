#include<bits/stdc++.h>

using namespace std;

int n, k;
vector<vector<int>> a, kq; // kq de luu dap an
vector<int> b;
vector<bool> vs;

void print(){
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i][b[i]];
	}
	if(sum == k) kq.push_back(b);
}

void sinh(int i){
	for(int j = 0; j < n; j++){
		if(!vs[j]){
			b[i] = j;
			vs[j] = true;
			if(i == n - 1) print();
			else sinh(i + 1);
			vs[j] = false;
		}
	}
}

void check(){
	cin >> n >> k;
	a.resize(n, vector<int>(n));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	b.clear(); b.resize(n);
	vs.clear(); vs.resize(n, false);
	kq.clear();
	sinh(0);
	cout << kq.size() << endl;
	for(auto i : kq){
		for(int j : i){
			cout << j + 1 << " ";
		}
		cout << endl;
	}
}

int main(){
	check();
}
