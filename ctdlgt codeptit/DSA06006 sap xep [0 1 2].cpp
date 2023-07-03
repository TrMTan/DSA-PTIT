#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	vector<int> a(n);
	for(int &i : a) cin >> i;
	sort(a.begin(), a.end());
	for(int i : a){
		cout << i << " ";
	} 
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
