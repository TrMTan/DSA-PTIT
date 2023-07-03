#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	int d7 = 0, d4 = 0; // dem so luong so 4 va 7
	int res4 = 1e9, res7 = 1e9;
	for(int i = n; i >= 0; i--){
		if(n >= 4 * i && (n - 4 * i) % 7 == 0){
			d4 = i;
			d7 = (n - 4 * i) / 7;
			if(res4 + res7 > d4 + d7){
				res4 = d4; res7 = d7;
			}else if(res4 + res7 == d4 + d7){
				if(res4 > d4){
					res4 = d4; res7 = d7;
				}
			}
		}
	}
	if(res4 * 4 + res7 * 7 == n){
		while(res4--) cout << 4;
		while(res7--) cout << 7;
	}else cout << -1;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
