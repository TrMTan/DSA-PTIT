#include<bits/stdc++.h>

using namespace std;

char n;
int k;

void lkxkt(int i, string s = "", char c = 'A'){
	if(i == k){
		cout << s << endl;
		return;
	}
	for(char j = c; j <= n; j++){
		lkxkt(i + 1, s + j, j);
	}
}

int main(){
	cin >> n >> k;
	lkxkt(0);
}

