#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	vector<int> a(n);
	for(int &i : a) cin >> i;
	int kq = 0;
	for(int i = 0; i < n; i++){
		int id = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[id]) id = j;
		}
		if(id != i){
			kq++;
			swap(a[i], a[id]);
		}
	}
	cout << kq << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
	}
}
