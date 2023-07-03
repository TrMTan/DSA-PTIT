#include<bits/stdc++.h>

using namespace std;

int n, kq;
int cot[20], d1[20], d2[20]; // d1: duong cheo xuoi, d2: duong cheo nguoc, cot de danh dau cot

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(cot[j] == 0 && d1[i - j + n] == 0 && d2[i + j - 1] == 0){
			cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
			if(i == n) kq++;
			else Try(i + 1);
			cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
		}
	}
}

void check(){
	cin >> n;
	kq = 0;
	Try(1);
	cout << kq;
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}	
}
