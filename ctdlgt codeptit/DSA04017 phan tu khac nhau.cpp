#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int pos = 0;
	for(int i = 0; i < n - 1; i++){
		int x; cin >> x;
		if(x != a[i] && pos == 0){
			pos = i + 1;
		}
	}
	cout << pos;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}

