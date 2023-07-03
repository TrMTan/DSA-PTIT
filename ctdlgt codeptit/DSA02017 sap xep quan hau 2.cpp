#include<bits/stdc++.h>

using namespace std;

int kq;
int a[20][20], cot[20], d1[20], d2[20]; // d1: duong cheo xuoi, d2: duong cheo nguoc, cot de danh dau cot

void Try(int i, int sum){	
	for(int j = 1; j <= 8; j++){
		if(cot[j] == 0 && d1[i - j + 8] == 0 && d2[i + j - 1] == 0){
			cot[j] = d1[i - j + 8] = d2[i + j - 1] = 1;
			sum += a[i][j];
			if(i == 8) kq = max(kq, sum);
			else Try(i + 1, sum);
			sum -= a[i][j];
			cot[j] = d1[i - j + 8] = d2[i + j - 1] = 0;
		}
	}
}

void check(){
	for(int i = 1; i <= 8; i++){
		for(int j = 1; j <= 8; j++){
			cin >> a[i][j];
		}
	}	
	kq = 0;
	Try(1, 0);
	cout << kq;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
