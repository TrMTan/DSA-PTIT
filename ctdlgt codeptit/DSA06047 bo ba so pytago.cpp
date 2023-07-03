#include<bits/stdc++.h>

using namespace std;

void check(){
	int n; cin >> n;
	vector<long long> a(n);
	for(auto &i : a) cin >> i;
	sort(a.begin(), a.end());
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			long long tmp = pow(a[i], 2) + pow(a[j], 2);
			long long c = sqrt(tmp);
			if(c * c == tmp && binary_search(a.begin() + j + 1, a.end(), c)){
				cout << "YES";
				return;
			}
		}
	}
	cout << "NO";
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
