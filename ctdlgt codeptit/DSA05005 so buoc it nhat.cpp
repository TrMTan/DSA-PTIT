#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	int a[n], l[n]; // l de luu do dai day con tang dai nhat o chi so i
	for(int &i : a) cin >> i;
	for(int i = 0; i < n; i++){
		l[i] = 1;
		for(int j = 0; j < i; j++){
			if(a[i] >= a[j]){
				l[i] = max(l[i], l[j] + 1);
			}
		}
	}
	cout << n - *max_element(l, l + n);
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
