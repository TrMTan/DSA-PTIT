#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
//	priority_queue<int> pq; // mac dinh top lay ra so lon nhat
	priority_queue<int, vector<int>, greater<int>> pq; //  top lay ra so nho nhat
	while(n--){
		int x; cin >> x;
		pq.push(x);
	}
	long long kq = 0;
	while(pq.size() >= 2){
		int x = pq.top(); pq.pop(); // day co do dai nho nhat
		int y = pq.top(); pq.pop(); // day co do dai nho thu hai
		kq += x + y;
		pq.push(x + y);
	}
	cout << kq;
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}

