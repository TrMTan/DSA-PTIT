#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	queue<pair<int, int>> q; 
	q.push({n, 0});
	while(!q.empty()){
		pair<int, int> p = q.front(); // tham so dau la n, tham so 2 la so lan bien doi vs p la phan tu dua vao hang doi
		q.pop();
		if(p.first == 1){ // neu n bang 1 thi in ra so lan bien doi
			cout << p.second;
			return;
		}
		if(p.first % 3 == 0){
			q.push({p.first / 3, p.second + 1});
		}
		if(p.first % 2 == 0){
			q.push({p.first / 2, p.second + 1});
		}
		q.push({p.first - 1, p.second + 1});
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
