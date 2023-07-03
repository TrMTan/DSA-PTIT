#include<bits/stdc++.h>

using namespace std;

//void check(){
//	long long n, m;
//	cin >> n >> m;
//	int a[n], b[m];
//	for(int i = 0; i < n; i++){
//		cin >> a[i];
//	}
//	for(int i = 0; i < m; i++){
//		cin >> b[i];
//	}
//	sort(a, a + n);
//	sort(b, b + n);
//	cout << (long long)a[n - 1] * b[0] << endl; 
//}

void check(){
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for(int &i : a) cin >> i;
	for(int &i : b) cin >> i;
	cout << (long long) *max_element(a.begin(), a.end()) * *min_element(b.begin(), b.end()) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
