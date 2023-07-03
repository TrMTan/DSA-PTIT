#include<bits/stdc++.h>

using namespace std;

int kt(vector<int> &a, int &k){
	int n = a.size(), l, r;
	for(int i = 0; i < n; i++){
		l = i + 1; r = n - 1;
		while(l < r){
			if(a[i] + a[l] + a[r] == k) return 1;
			if(a[i] + a[l] + a[r] < k) l++;
			else r--;
		}
	}
	return 0;
}

void check(){
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for(int &i : a) cin >> i;
	sort(a.begin(), a.end());
	if(kt(a, k)) cout << "YES";
	else cout << "NO";
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
