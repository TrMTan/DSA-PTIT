#include<bits/stdc++.h>

using namespace std;

long long f[100001];

void check(){
	int n; cin >> n;
	int i2 = 1, i3 = 1, i5 = 1;
	f[1] = 1;
	for(int i = 2; i <= 1e4; i++){
		f[i] = min({f[i2] * 2, f[i3] * 3, f[i5] * 5});
		if(f[i] == f[i2] * 2) i2++;
		if(f[i] == f[i3] * 3) i3++;
		if(f[i] == f[i5] * 5) i5++;
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
