#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	vector<int> a(n);
	vector<vector<int>> b;
	for(int &i : a) cin >> i;
	for(int i = 0; i < n; i++){
		int x = a[i], pos = i - 1;
		while(pos >= 0 && a[pos] > x){
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = x;
		b.push_back(a);
	}
	for(int i = b.size() - 1; i >= 0; i--){
		cout << "Buoc " << i << ": ";
		for(int k = 0; k <= i; k++){
			cout << b[i][k] << " ";
		}
		cout << endl;
	}
}
