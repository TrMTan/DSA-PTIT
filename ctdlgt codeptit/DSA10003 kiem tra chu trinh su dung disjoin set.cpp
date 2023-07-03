#include<bits/stdc++.h>

using namespace std;

int v, e, x, y;
int parent[1001];

void make_set(){
	for(int i = 1; i <= v; i++){
		parent[i] = i;
	}
}

int find(int v){
	if(v == parent[v]) return v;
	return parent[v] = find(parent[v]);
}

bool Union(vector<pair<int, int>> vp){
	int parentU, parentV;
	for(pair<int, int> i : vp){
		parentU = find(i.first);
		parentV = find(i.second);
		if(parentU == parentV) return 1;
		parent[parentU] = parentV;
	}
	return 0;
}

void check(){
	cin >> v >> e;
	make_set();
	vector<pair<int, int>> vp;
	while(e--){
		cin >> x >> y;
		vp.push_back({x, y});
	}
	if(Union(vp)){
		cout << "YES";
	}else{
		cout << "NO";
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
