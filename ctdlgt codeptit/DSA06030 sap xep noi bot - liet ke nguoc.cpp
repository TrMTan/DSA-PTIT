#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> a(n);
		vector<vector<int>> b;
		for(int &i : a) cin >> i;
		for(int i = 0; i < n - 1; i++){
			bool check = true;
			for(int j = 0; j < n - i - 1; j++){
				if(a[j] > a[j + 1]){
					swap(a[j], a[j + 1]);
					check = false;
				}
			}
			if(check) break;
			b.push_back(a);
		}
		for(int i = b.size() - 1; i >= 0; i--){
			cout << "Buoc " << i + 1 << ": ";
			for(int k = 0; k < n; k++){
				cout << b[i][k] << " ";
			}
			cout << endl;
		}
	}
}
