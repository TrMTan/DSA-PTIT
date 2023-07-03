#include<bits/stdc++.h>

using namespace std;

int n, x, a[21];
vector<vector<int>> res;

void sinh(int limit, int remain, vector<int> v){
	if(remain == x){
		res.push_back(v);
		return;
	}
	for(int i = 1; i <= n; i++){
		if(a[i] >= limit && remain + a[i] <= x){
			v.push_back(a[i]);
			sinh(a[i], remain + a[i], v);
			v.pop_back();
		}
	}
}

void check(){
	res.clear();
	cin >> n >> x;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	sinh(1, 0, {});
	if(res.empty()) cout << -1;
	else{
		cout << res.size() << " ";
		for(auto v : res){
			cout << "{";
			for(int i = 0; i < v.size() - 1; i++){
				cout << v[i] << " ";
			}
			cout << v.back() << "} ";
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;		
	}
}
	
