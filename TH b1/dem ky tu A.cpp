#include<bits/stdc++.h>

using namespace std;
 
long long fb[92], dem[92];

int check(int n, int k){
	if(n == 0) return 1;
	if(n == 1) return 0;
	if(k <= fb[n - 1]) return check(n - 1, k);
	else return dem[n - 1] + check(n - 2, k - fb[n - 1]);
}

void ktao(){
	dem[0] = fb[0] = fb[1] = 1;
	dem[1] = 0;
	for(int i = 2; i <= 90; i++){
		fb[i] = fb[i - 1] + fb[i - 2];
		dem[i] = dem[i - 1] + dem[i - 2];
	}
}
 
int main(){
	int t; cin >> t;
	while(t--){
		ktao();
		int n, k;
		cin >> n >> k;
		cout << check(n, k) << endl;
	}
}
