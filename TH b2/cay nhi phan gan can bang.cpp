#include<bits/stdc++.h>

using namespace std;

vector<int> tree;

void build(int idx, int n){
	if(idx >= n) return;
	cin >> tree[idx];
	build(2 * idx + 1, n);
	build(2 * idx + 2, n);
}



int main(){
	
}
