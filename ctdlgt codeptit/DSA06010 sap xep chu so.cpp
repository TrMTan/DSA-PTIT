#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	cin.ignore();
	string s; getline(cin, s);
	int a[10] = {0};
	for(char i : s){
		if(isdigit(i)){
			a[i - '0'] = 1;
		}
	}
	for(int i = 0; i < 10; i++){
		if(a[i]){
			cout << i << " ";
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
