#include<bits/stdc++.h>

using namespace std;

void check(){
	int k; cin >> k;
	string s; cin >> s;
	int d[127] = {0}; // dem so luong xuat hien cua 1 ky tu;
	for(char i : s) d[i]++;
	priority_queue<int> q;
	for(int i : d){
		if(i > 0) q.push(i); // them so lan xuat hien vao queue
	}
	while(k--){
		if(q.empty()) break;
		int x = q.top(); q.pop(); // lay dinh cua queue
		x--; // xoa 1 ky tu di thi tan xuat giam di
		q.push(x);
	}
	long long kq = 0;
	while(!q.empty()){
		long long x = q.top(); q.pop();
		kq += x * x;
	}
	cout << kq;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
