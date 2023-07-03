#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	set<int> s;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		s.insert(x);
	}
	vector<int> a(s.begin(), s.end());
	if(a.size() < 2) cout << "-1";
	else cout << a[0] << " " << a[1];
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
