#include<bits/stdc++.h>

using namespace std;

int n, x;
bool ok;
vector<int> a;

void sinh(int j, int value, vector<int> v){
	if(value == x){
		ok = true;
		cout << "[";
		for(int i = 0; i < v.size(); i++){
			cout << v[i];
			if(i != v.size() - 1) cout << " ";
		}
		cout << "]";
	}
	for(int i = 0; i < n; i++){
		if(a[i] >= j && value + a[i] <= x){
			v.push_back(a[i]);
			sinh(a[i], value + a[i], v);
			v.pop_back();
		}
	}
}

void check(){
	cin >> n >> x;
	a.resize(n);
	ok = false;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	sinh(1, 0, {});
	if(!ok) cout << -1;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
