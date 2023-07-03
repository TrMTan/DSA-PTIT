#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	int x, y;
	queue<int> q;
	while(n--){
		cin >> x;
		if(x == 1){
			cout << q.size() << endl;
		}else if(x == 2){
			if(q.empty()) cout << "YES" << endl;
			else cout << "NO" << endl;
		}else if(x == 3){
			cin >> y;
			q.push(y);
		}else if(x == 4){
			if(!q.empty()) q.pop();
		}else if(x == 5){
			if(q.empty()) cout << "-1" << endl;
			else cout << q.front() << endl;
		}else if(x == 6){
			if(q.empty()) cout << "-1" << endl;
			else cout << q.back() << endl;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
	}
}
