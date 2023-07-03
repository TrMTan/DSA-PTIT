#include<bits/stdc++.h>

using namespace std;

int v, e, x, y;
vector<pair<int, int>> ke;

void check(){
	cin >> v >> e;
	ke.clear(); ke.resize(v + 1);
	while(e--){
		cin >> x >> y;
		ke[x].first++;
		ke[y].second++;	
	}
	for(int i = 1; i <= v; i++){
		if(ke[i].first != ke[i].second){
			cout << "0";
			return;
		}
	}
	cout << "1";
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
