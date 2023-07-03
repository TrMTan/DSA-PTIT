#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	queue<int> q;
	string s;
	int x;
	while(n--){
		cin >> s;
		if(s == "PUSH"){
			cin >> x;
			q.push(x);
		}else if(s == "POP"){
			if(!q.empty()){
				q.pop();
			}
		}else if(s == "PRINTFRONT"){
			if(q.empty()){
				cout << "NONE";
			}else{
				cout << q.front();
			}
			cout << endl;
		}
	}
	
}

int main(){
	check();
}
