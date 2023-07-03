#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, m, k;
	cin >> n >> m >> k;
	int a[n], b[m], c[k];
	for(int &i : a) cin >> i;
	for(int &i : b) cin >> i;
	for(int &i : c) cin >> i;
	bool kt = 0;
	int ida, idb, idc; 
	ida = idb = idc = 0;
	while(ida < n && idb < m && idc < k){
		if(a[ida] == b[idb] && b[idb] == c[idc]){
			cout << a[ida] << " ";
			kt = 1;
			ida++; idb++; idc++;
		} else if(a[ida] < b[idb]) ida++;
		else if(b[idb] < c[idc]) idb++;
		else idc++;
	}
	if(!kt) cout << "NO";
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
