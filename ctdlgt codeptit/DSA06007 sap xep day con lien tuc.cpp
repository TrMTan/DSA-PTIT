#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	int a[n], b[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b + n);
	int l = 0, r = n - 1;
	while(b[l] == a[l]) l++;
	while(b[r] == a[r]) r--;
	cout << l + 1 << " " << r +1 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
