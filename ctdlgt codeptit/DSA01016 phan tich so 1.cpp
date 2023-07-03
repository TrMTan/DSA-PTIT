#include<bits/stdc++.h>

using namespace std;
// limit la gioi han so nguyen duong co the su dung
void sinh(int limit, int remain, vector<int> a){ // remain de xet tong con lai can duoc chia
	if(remain == 0){
		cout << "(";
		for(int i = 0; i < a.size() - 1; i++){
			cout << a[i] << " ";
		}
		cout << a.back() << ") ";
	}
	for(int i = limit; i >= 1; i--){
		if(remain >= i){
			a.push_back(i);
			sinh(i, remain - i, a);
			a.pop_back();
		}
	}
}

void check(){
	int n; cin >> n;
	sinh(n, n, {});
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
