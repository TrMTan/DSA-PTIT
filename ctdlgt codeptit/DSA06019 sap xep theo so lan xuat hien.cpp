#include<bits/stdc++.h>

using namespace std;

map<int, int> mp;

bool cmp(int a, int b){
	if(mp[a] != mp[b]){
		return mp[a] > mp[b];
	}
	return a < b;
}

void check(){
	int n; cin >> n;
	int a[n];
	for(int &i : a){
		cin >> i;
		mp[i]++;
	}
	sort(a, a + n, cmp);
	for(int &i : a) cout << i << " ";
	mp.clear();
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
