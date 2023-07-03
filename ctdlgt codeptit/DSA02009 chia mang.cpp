#include<bits/stdc++.h>

using namespace std;

int n, k, s, ok;
int a[30];

void sinh(int sum, int dem){
	if(ok) return;
	if(dem == k){
		ok = 1;
		return;
	}
	for(int i = 0; i < n; i++){
		if(sum == s){
			sinh(0, dem + 1);
		}else if(sum < s){
			sinh(sum + a[i], dem);
		}else{
			return;
		}
	}
}

void check(){
	ok = 0; s = 0;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		s += a[i];
	}
	if(s % k != 0){
		cout << 0; return;
	}
	if(ok) cout << 0;
	else cout << 1;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
