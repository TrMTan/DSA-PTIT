#include<bits/stdc++.h>

using namespace std;

int main(){
	string s; int x;
	int q; cin >> q;
	deque<int> dq;
	while(q--){
		cin >> s;
		if(s == "PUSHFRONT"){
			cin >> x;
			dq.push_front(x);
		}else if(s == "PUSHBACK"){
			cin >> x;
			dq.push_back(x);
		}else if(s == "POPFRONT"){
			if(!dq.empty()){
				dq.pop_front();
			}
		}else if(s == "POPBACK"){
			if(!dq.empty()){
				dq.pop_back();
			}
		}else if(s == "PRINTFRONT"){
			if(dq.empty()) cout << "NONE";
			else cout << dq.front();
			cout << endl;
		}else if(s == "PRINTBACK"){
			if(dq.empty()) cout << "NONE";
			else cout << dq.back();
			cout << endl;
		}
		cout << endl;
	}
}
