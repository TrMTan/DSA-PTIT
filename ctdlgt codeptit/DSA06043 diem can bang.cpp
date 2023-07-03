#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, kq = -1; cin >> n;
	int a[n];
	long long sum = 0;
	for(int i = 0 ; i < n; i++){
		cin >> a[i];
		sum += a[i]; //tinh tong cac ptu trong mang
	}
	long long left = 0; // tinh tong cac ptu ben trai
	for(int i = 0; i < n; i++){
		sum -= a[i];
		if(sum == left){
			kq = i + 1; 
			break;
		}
		left += a[i];
	}
	cout << kq << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
	}
}

