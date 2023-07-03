#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> a, b, vs;
vector<vector<int>> res;

void sinhhv(int m){
	for(int i = 0; i < n; i++){
		if(vs[i] == 0){
			b[m] = a[i];
			vs[i] = 1;
			if(m == n - 1) res.push_back(b);
			else sinhhv(m + 1);
			vs[i] = 0;
		}
	}
}

void check(){
	cin >> n;
	a.resize(n);
	b.resize(n);
	vs.resize(n, 0);
	for(int &i : a) cin >> i;
	sort(a.begin(), a.end());
	sinhhv(0);
	sort(res.begin(), res.end());
	for(auto i : res){
		for(int j : i){ 
			cout << j << " ";
 		}
		cout << endl;
	}	
}

int main(){
	check();
	cout << endl;
}
