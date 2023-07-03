#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	int a[n], b[n];
	bool ok = true;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b + n);
	for(int i = 0; i < n; i++){
		if(a[i] != b[i] && a[i] != b[n - i - 1]){
			ok = false;
			break;
		}
	}
	if(ok) cout << "Yes";
	else cout << "No";
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
