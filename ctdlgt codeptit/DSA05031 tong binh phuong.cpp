#include<bits/stdc++.h>

using namespace std;

void check(){
	int n;
	cin >> n;
	vector<int> f(n + 1, 0);
	for(int i = 1; i <= n; i++){
		f[i] = i;
		for(int j = 1; j <= sqrt(i); j++){
			f[i] = min(f[i], f[i - j * j] + 1);
		}
	}
	cout << f[n];
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); 
		cout << endl;
	}
}
