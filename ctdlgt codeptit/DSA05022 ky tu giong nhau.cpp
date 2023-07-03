#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	int in, de, co;
	cin >> in >> de >> co;
	int f[101] = {};
	f[1] = in; // buoc dau luon la insert; insert den khi bang 1 nua
	for(int i = 2; i <= n; i++){
		if(i % 2 == 1){
			f[i] = min({f[i - 1] + in, f[(i - 1) / 2] + co + in, f[(i + 1) / 2] + co + de});
		}else{
			f[i] = min(f[i - 1] + in, f[i / 2] + co);
		}
	}
	cout << f[n];	
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
