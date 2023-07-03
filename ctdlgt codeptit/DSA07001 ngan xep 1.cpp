#include<bits/stdc++.h>

using namespace std;

void check(){
	vector<int> st;
	string s;
	int x;
	while(cin >> s){
		if(s == "push"){
			cin >> x;
			st.push_back(x);
		}else if(s == "pop"){
			if(!st.empty()){
				st.pop_back();
			}
		}else if(s == "show"){
			if(st.empty()){
				cout << "empty";
			}else{
				for(int i : st) cout << i << " ";
			}
			cout << endl;
		}
	}
	
}

int main(){
	check();
}
