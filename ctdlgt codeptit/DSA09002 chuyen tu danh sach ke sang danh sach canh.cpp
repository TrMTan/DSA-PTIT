#include<bits/stdc++.h>

using namespace std;

int n;
vector<pair<int, int>> p;

int main(){
	cin >> n;
	cin.ignore();
	for(int i = 1; i <= n; i++){
		string s, num;
		getline(cin, s);
		stringstream ss(s);
		while(ss >> num){
			if(stoi(num) > i){
				p.push_back({i, stoi(num)});
			}
		}
	}
	for(auto it : p){
		cout << it.first << " " << it.second << endl;
	}
}
