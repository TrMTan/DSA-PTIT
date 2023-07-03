#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for(int &i : a) cin >> i;
	sort(a.begin(), a.end());
	int kq = 0;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] + a[j] == k){
				kq++;
			}
		}
	}
	cout << kq << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
