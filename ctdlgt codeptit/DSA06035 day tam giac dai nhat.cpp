#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	int a[100005], l[100005] = {}, r[100005] = {};
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++){
		if(a[i] > a[i - 1]){  //giam
			l[i] = l[i - 1] + 1;
		}else{
			l[i] = 1;
		}
	}
	for(int i = n; i >= 1; i--){
		if(a[i] > a[i + 1]){  //tang
			r[i] = r[i + 1] + 1;
		}else{
			r[i] = 1;
		}
	}
	int kq = 0;
	for(int i = 1; i <= n; i++){
		kq = max(kq, l[i] + r[i] - 1);
	}
	cout << kq;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
