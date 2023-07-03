#include<bits/stdc++.h>

using namespace std;
// co the lam bang cai tui
void check(){
	int c, n, w;
	cin >> c >> n;
	vector<int> f(c + 1, false);
	f[0] = true;
	for(int i = 1; i <= n; i++){
		cin >> w;
		for(int j = c; j >= w; j--){
			if(f[j] == false && f[j - w] == true){
				f[j] = true;
			}
		}	
	}
	for(int i = c; i >= 0; i--){
		if(f[i] == true){
			cout << i;
			return;
		}
	}
}

int main(){
	check();
}
