#include<bits/stdc++.h>

using namespace std;

int n;
int a[20];
vector<vector<int>> res;
vector<int> v;

void sinh(int i, int sum = 0){
	if(sum % 2 == 1) res.push_back(v);
	if(i > n) return;
	for(int j = i; j <= n; j++){
		v.push_back(a[j]);
		sinh(j + 1, sum + a[j]);
		v.pop_back();
	}
}

void check(){
	cin >> n;
	v.clear();
	res.clear();
	for(int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + n + 1, greater<int>());
	sinh(1);
	sort(res.begin(), res.end());
	for(vector<int> &i : res){
		for(int &j : i){
			cout << j << " ";
		}
		cout << endl;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
