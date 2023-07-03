#include<bits/stdc++.h>

using namespace std;

int n, k, s, kq;
int a[100];

void print(){
	int sum = 0;
	for(int i = 1; i <= k; i++){
		sum += a[i];
	}
	if(sum == s) kq++;
}

void sinh(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j++){
		a[i] = j;
		if(i == k) print();
		else sinh(i + 1);
	}
}

void check(){
	while(1){
		cin >> n >> k >> s;
		if(n == 0 && k == 0 && s == 0) break;
		kq = 0;
		sinh(1);
		cout << kq << endl;
	}
}

int main(){
	check();
}
