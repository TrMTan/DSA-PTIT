#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n;
		int a[10005] = {}; 
		vector<int> v; // luu cac phan tu trong mang dc nhap vao
		int sz = n;
		for(int i = 0; i < n; i++){
			cin >> x;
			if(!a[x]) v.push_back(x);
			a[x] = 1; // danh dau da duoc dua vao vector
		}
		if(is_sorted(v.begin(), v.end()) && v.size() == sz) cout << 1;
		else cout << 0;
		cout << endl;
	}
}
