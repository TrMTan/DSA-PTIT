#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> res;

void sinh(int limit, int remain, vector<int> a){
	if(remain == 0){
		res.push_back(a);
		return;
	}
	for(int i = limit; i >= 1; i--){
		if(remain >= i){
			a.push_back(i);
			sinh(i, remain - i, a);
			a.pop_back();
		}
	}
}

void check(){
	res.clear();
	int n; cin >> n;
	sinh(n, n, {});
	cout << res.size() << endl;
	for(auto a : res){
		cout << "(";
		for(int i = 0; i < a.size() - 1; i++){
			cout << a[i] << " ";
		}
		cout << a.back() << ") ";
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
