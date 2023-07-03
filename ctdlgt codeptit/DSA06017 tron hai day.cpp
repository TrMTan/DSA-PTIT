#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, m;
	cin >> n >> m;
	vector<int> a(n + m);
	for(int i = 0; i < n + m; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for(int x : a) cout << x << " ";
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
