#include<bits/stdc++.h>

using namespace std;

void check(){
	int x, y, z;
	cin >> x >> y >> z;
	int a[x], b[y], c[z];
	for(int & i : a) cin >> i;
	for(int & i : b) cin >> i;
	for(int & i : c) cin >> i;
	vector<int> v;
	int i = 0, j = 0, k = 0;
	while( i < x && j < y && k < z){
		if(a[i] == b[j] && b[j] == c[k]){
			v.push_back(a[i]);
			i++; j++; k++;
		}
		else if(a[i] < b[j]) i++;
		else if(b[j] < c[k]) j++;
		else k++;
	}
	if(v.size() == 0) cout << "-1";
	else{
		for(int i : v){
			cout << i << " ";
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
