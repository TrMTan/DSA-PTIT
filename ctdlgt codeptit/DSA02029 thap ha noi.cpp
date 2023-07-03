#include<bits/stdc++.h>

using namespace std;

void thaphn(int n, char a, char b, char c){
	if(n == 1){
		cout << a << " -> " << c << endl;
		return; 
	}
	thaphn(n - 1,a, c, b); // chuyen n-1 dia tu a sang b
	thaphn(1, a, b, c); // chuyen dia thu n tu a sang c
	thaphn(n - 1, b, a, c); // chuyen n - 1 dia u b sang c
}

void check(){
	int n; cin >> n;
	thaphn(n, 'A', 'B', 'C');
}

int main(){
	check();
}
