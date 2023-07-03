#include<bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

void check(){
	int n; cin >> n;
//	priority_queue<int> pq; // mac dinh top lay ra so lon nhat
	priority_queue<long long, vector<long long>, greater<long long>> pq; //  top lay ra so nho nhat
	while(n--){
		long long x; cin >> x;
		pq.push(x);
	}
	long long kq = 0;
	while(pq.size() >= 2){
		int x = pq.top(); pq.pop(); // day co do dai nho nhat
		int y = pq.top(); pq.pop(); // day co do dai nho thu hai
		long long z = (x + y) % MOD;
		pq.push(z);
		kq += z;
		kq %= MOD;
	}
	cout << kq;
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}

