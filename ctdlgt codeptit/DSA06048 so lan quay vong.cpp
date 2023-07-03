#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, kq = 0; cin >> n;
	long long a[n];
	for(auto &i : a) cin >> i;
	for(int i = 1; i < n; i++){
		if(a[i] < a[i - 1]){
			kq = i;
			break;
		}	
	}
	cout << kq << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
