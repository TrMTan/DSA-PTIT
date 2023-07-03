#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	int a[n];
	for(int &i : a) cin >> i;
	sort(a, a + n);
	int l = 0, r = n - 1;
	while(l < r){
		for(int i = l; i <= r; i++){
			if(l == r){
				break;
			}else{
				cout << a[r--] << " " << a[l++] << " ";
			}
		}
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
	}
}
