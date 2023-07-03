#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for(int &i : a) cin >> i;
	int it = lower_bound(a.begin(), a.end(), k) - a.begin();
	if(it == n || a[it] != k) cout << "NO";
	else cout << it + 1;
	cout << endl; 
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
