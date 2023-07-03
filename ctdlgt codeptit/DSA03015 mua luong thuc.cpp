#include<bits/stdc++.h>

using namespace std;
// n: so don vi luong thuc mua duoc nhieu nhat trong ngay 
// s:  so luong ngay can an de song
// m: so don vi luong thuc an trong 1 ngay
// s * m: so luong thuc can de an trong m ngay
// (s - s/7) * n: so luong thuc co the mua trong n ngay
void check(){
	int n, s, m; 
	cin >> n >> s >> m;
	if(s * m > (s - s/7) * n) cout << "-1";
	else{
		for(int i = 1; i <= s - s/7; i++){
			if(n * i >= s * m){
				cout << i;
				break;
			}
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
